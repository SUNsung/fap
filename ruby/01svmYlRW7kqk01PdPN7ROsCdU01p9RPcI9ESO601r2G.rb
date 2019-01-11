
        
          #
  # Returns the resource that is being requested.
  #
  def resource
    self.uri_parts['Resource']
  end
    
      # open rmcpplus_request
  def self.create_ipmi_session_open_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
              res
        end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
    # Get the version string. If this is being installed from Git,
# this includes the proper prerelease version.
def get_version
  File.read(scope('VERSION').strip)
end
    
    $stderr.puts <<DEPRECATION
WARNING: Ruby Sass's Git repository is moving, and the old repository will be
deled on 26 March 2019! Please update your Git URLs to point to the new
repository at https://github.com/sass/ruby-sass.
    
        def validate_and_append_child(parent, child, line, root)
      case child
      when Array
        child.each {|c| validate_and_append_child(parent, c, line, root)}
      when Tree::Node
        parent << child
      end
    end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
          private
    
        def print_config_variables
      ['--print-config-variables', '-p',
       'Display the defined config variables before starting the deployment tasks.',
       lambda do |_value|
         Configuration.env.set(:print_config_variables, true)
       end]
    end
  end
end

    
          def select?(options)
        options.each do |k, v|
          callable = v.respond_to?(:call) ? v : ->(server) { server.fetch(v) }
          result = \
            case k
            when :filter, :select
              callable.call(self)
            when :exclude
              !callable.call(self)
            else
              fetch(k) == v
            end
          return false unless result
        end
    
          class ValidatedQuestion < Question
        def initialize(validator)
          @validator = validator
        end
    
    @@ index
  <h1>Sinatra + Sidekiq Example</h1>
  <h2>Failed: <%= @failed %></h2>
  <h2>Processed: <%= @processed %></h2>
    
          def exists?(klass)
        any? { |entry| entry.klass == klass }
      end
    
        def settings
      self.class.settings
    end