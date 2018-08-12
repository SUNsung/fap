
        
                def redis_connection
          self.class.redis_connector.call(@server.config.cable)
        end
    
        def build_from_hash(attributes)
      attributes = convert_dot_notation_to_hash(attributes)
      expand_from_hash(attributes)
    end
    
      def test_should_save_changed_has_one_changed_object_if_child_is_saved
    @pirate.ship.name = 'NewName'
    assert @pirate.save
    assert_equal 'NewName', @pirate.ship.reload.name
  end
    
      has_many :replies, dependent: :destroy, foreign_key: 'parent_id', autosave: true
  has_many :approved_replies, -> { approved }, class_name: 'Reply', foreign_key: 'parent_id', counter_cache: 'replies_count'
    
      test 'on connection close' do
    run_in_eventmachine do
      connection = open_connection
      connection.process
    
      private
    def open_connection
      env = Rack::MockRequest.env_for '/test',
        'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket',
        'HTTP_HOST' => 'localhost', 'HTTP_ORIGIN' => 'http://rubyonrails.com'
      env['rack.hijack'] = -> { env['rack.hijack_io'] = StringIO.new }
    
      test 'broadcaster from broadcaster_for generates notification' do
    begin
      server = TestServer.new
    
        private
    
    		elsif line =~ /\w+:\t/
			block_do(line)