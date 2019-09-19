
        
            if (error != CL_SUCCESS) {
        return error;
    } 
    
    #endif // OPENPOSE_HAND_HAND_PARAMETERS_HPP

    
    namespace op
{
    struct PersonEntry
    {
        long long counterLastDetection;
        std::vector<cv::Point2f> keypoints;
        std::vector<char> status;
        /*
        PersonEntry(long long _last_frame, 
                    std::vector<cv::Point2f> _keypoints,
                    std::vector<char> _active):
                    last_frame(_last_frame), keypoints(_keypoints),
                    active(_active)
                    {}
        */
    };
    class OP_API PersonIdExtractor
    {
    }
    }
    
    BulkOperations::AbstractOperation::AbstractOperation(
    QSharedPointer<RedisClient::Connection> connection, int dbIndex,
    OperationCallback callback, QRegExp keyPattern)
    : m_connection(connection),
      m_dbIndex(dbIndex),
      m_keyPattern(keyPattern),
      m_currentState(State::READY),
      m_progress(0),
      m_callback(callback) {}
    
    BulkOperations::CopyOperation::CopyOperation(
    QSharedPointer<RedisClient::Connection> connection, int dbIndex,
    OperationCallback callback, QRegExp keyPattern)
    : BulkOperations::AbstractOperation(connection, dbIndex, callback,
                                        keyPattern) {}
    
    BulkOperations::TtlOperation::TtlOperation(
    QSharedPointer<RedisClient::Connection> connection, int dbIndex,
    OperationCallback callback, QRegExp keyPattern)
    : BulkOperations::AbstractOperation(connection, dbIndex, callback,
                                        keyPattern) {}
    
      void openServerStats() override;
    
    
    {    return callback(filter, processed, e);
  };