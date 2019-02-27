
        
        
    {  /**
   * Compresses data buffer.
   * @param buffer supplies the reference to data to be compressed. The content of the buffer will
   *        be replaced inline with the compressed data.
   * @param state supplies the compressor state.
   */
  virtual void compress(Buffer::Instance& buffer, State state) PURE;
};
    
      /**
   * @return the stage value that the configuration is applicable to.
   */
  virtual uint64_t stage() const PURE;