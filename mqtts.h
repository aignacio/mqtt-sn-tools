#define MQTTS_TYPE_ADVERTISE     (0x00)
#define MQTTS_TYPE_SEARCHGW      (0x01)
#define MQTTS_TYPE_GWINFO        (0x02)
#define MQTTS_TYPE_CONNECT       (0x04)
#define MQTTS_TYPE_CONNACK       (0x05)
#define MQTTS_TYPE_WILLTOPICREQ  (0x06)
#define MQTTS_TYPE_WILLTOPIC     (0x07)
#define MQTTS_TYPE_WILLMSGREQ    (0x08)
#define MQTTS_TYPE_WILLMSG       (0x09)
#define MQTTS_TYPE_REGISTER      (0x0A)
#define MQTTS_TYPE_REGACK        (0x0B)
#define MQTTS_TYPE_PUBLISH       (0x0C)
#define MQTTS_TYPE_PUBACK        (0x0D)
#define MQTTS_TYPE_PUBCOMP       (0x0E)
#define MQTTS_TYPE_PUBREC        (0x0F)
#define MQTTS_TYPE_PUBREL        (0x10)
#define MQTTS_TYPE_SUBSCRIBE     (0x12)
#define MQTTS_TYPE_SUBACK        (0x13)
#define MQTTS_TYPE_UNSUBSCRIBE   (0x14)
#define MQTTS_TYPE_UNSUBACK      (0x15)
#define MQTTS_TYPE_PINGREQ       (0x16)
#define MQTTS_TYPE_PINGRESP      (0x17)
#define MQTTS_TYPE_DISCONNECT    (0x18)
#define MQTTS_TYPE_WILLTOPICUPD  (0x1A)
#define MQTTS_TYPE_WILLTOPICRESP (0x1B)
#define MQTTS_TYPE_WILLMSGUPD    (0x1C)
#define MQTTS_TYPE_WILLMSGRESP   (0x1D)


#define MQTTS_FLAG_DUP     (0x1 << 7)
#define MQTTS_FLAG_QOS_0   (0x0 << 5)
#define MQTTS_FLAG_QOS_1   (0x1 << 5)
#define MQTTS_FLAG_QOS_2   (0x2 << 5)
#define MQTTS_FLAG_QOS_N1  (0x3 << 5)
#define MQTTS_FLAG_RETAIN  (0x1 << 4)
#define MQTTS_FLAG_WILL    (0x1 << 3)
#define MQTTS_FLAG_CLEAN   (0x1 << 2)

#define MQTTS_PROTOCOL_ID  (0x01)

typedef struct {
  uint8_t length;
  uint8_t type;
  uint8_t flags;
  uint8_t protocol_id;
  uint16_t duration;
  char client_id[21];
} connect_packet_t;