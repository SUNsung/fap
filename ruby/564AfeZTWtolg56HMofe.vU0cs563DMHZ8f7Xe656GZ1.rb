
        
              # Overwrite this factory method for Redis connections if you want to use a different Redis library than the redis gem.
      # This is needed, for example, when using Makara proxies for distributed Redis.
      cattr_accessor :redis_connector, default: ->(config) do
        ::Redis.new(config.slice(:url, :host, :port, :db, :password))
      end
    
            # The abstract adapter is used simply to bypass the bit of code that
        # checks that the adapter file can be required in.
    
      def test_collection_size_with_dirty_target
    post = posts(:thinking)
    assert_equal [], post.reader_ids
    assert_equal 0, post.readers.size
    post.readers.reset
    post.readers.build
    assert_equal [nil], post.reader_ids
    assert_equal 1, post.readers.size
  end
    
          env = Rack::MockRequest.env_for '/test', 'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket',
        'HTTP_HOST' => 'localhost', 'HTTP_ORIGIN' => 'http://rubyonrails.com'
    
    EOS
end
    
      protected
  def extract_fields(filter_string)
    (filter_string.empty? ? [] : filter_string.split(',').map { |s| s.strip.to_sym })
  end