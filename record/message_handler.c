#include "libp2p/record/message.h"
#include "libp2p/peer/peer.h"

/**
 * A generic handler for different types of messages
 */


static int libp2p_record_handler_ping(struct Libp2pPeer* peer, struct KademliaMessage* message) {
	return 0;
}

static int libp2p_record_message_handle(struct Libp2pPeer* peer, struct KademliaMessage* message) {
	switch (message->message_type) {
		case (MESSAGE_TYPE_PING):
			return libp2p_record_handler_ping(peer, message);
		default:
			break;
	}
	return 0;
}
