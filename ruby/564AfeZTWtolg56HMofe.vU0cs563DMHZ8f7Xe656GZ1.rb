
        
        require 'active_support/core_ext/module/redefine_method'
require 'action_controller'
require 'action_controller/test_case'
require 'action_view'
    
                @thread = nil
          end
    
            def test_url_port
          spec = resolve 'abstract://foo:123?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'port'     => 123,
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
          # Renames a column.
      #
      #  t.rename(:description, :name)
      #
      # See {connection.rename_column}[rdoc-ref:SchemaStatements#rename_column]
      def rename(column_name, new_column_name)
        @base.rename_column(name, column_name, new_column_name)
      end
    
            out_write.close
    
        private
      def rm_rf
        @last_action = [ :rm_rf ]
      end
  end
    
      test 'closes hijacked i/o socket at shutdown' do
    run_in_eventmachine do
      connection = open_connection
    
      test '#restart shuts down pub/sub adapter' do
    assert_called(@server.pubsub, :shutdown) do
      @server.restart
    end
  end
end

    
        it 'should have a way of getting the service configurations' do
      configs = key.service_configs_for(Spaceship::Portal::Key::MUSIC_KIT_ID)
      expect(configs).to be_instance_of(Array)
      expect(configs.sample).to be_instance_of(Hash)
      expect(configs.first['identifier']).to eq('music.com.snatchev.test')
    end
    
        # Returns the unwrapped subject and body of the last commit
    def self.last_git_commit_message
      s = (last_git_commit_formatted_with('%B') || '').strip
      return s if s.to_s.length > 0
      nil
    end
    
            expect(result).to eq('git svn info | grep Revision | egrep -o '[0-9]+'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('git svn info | grep Revision | egrep -o '[0-9]+'')
      end
    end
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
          expected_header = <<-END.chomp
rack.%2573ession=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
END
      expect(last_response.headers['Set-Cookie']).to eq(expected_header)
    end
  end
    
      context 'escaping' do
    it 'escapes html entities' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => '<bar>'
      expect(body).to eq('&lt;bar&gt;')
    end