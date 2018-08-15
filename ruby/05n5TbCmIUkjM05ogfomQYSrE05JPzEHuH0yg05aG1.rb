
        
                            if callbacks = @subscribe_callbacks[chan]
                      next_callback = callbacks.shift
                      @event_loop.post(&next_callback) if next_callback
                      @subscribe_callbacks.delete(chan) if callbacks.empty?
                    end
                  end
                end
    
    class TestDefaultAutosaveAssociationOnNewRecord < ActiveRecord::TestCase
  def test_autosave_new_record_on_belongs_to_can_be_disabled_per_relationship
    new_account = Account.new('credit_limit' => 1000)
    new_firm = Firm.new('name' => 'some firm')
    
    require 'models/topic'
    
      after_touch do
    self.after_touch_called += 1
  end
    
      test 'broadcasts_to' do
    assert_called_with(
      ActionCable.server,
      :broadcast,
      [
        'action_cable:channel:broadcasting_test:chat:Room#1-Campfire',
        'Hello World'
      ]
    ) do
      ChatChannel.broadcast_to(Room.new(1), 'Hello World')
    end
  end
    
      setup do
    @user = User.new 'lifo'
    @connection = TestConnection.new(@user)
  end
    
      setup do
    @server = TestServer.new
    @server.config.allowed_request_origins = %w( http://rubyonrails.com )
  end
    
    class RedisAdapterTest::AlternateConfiguration < RedisAdapterTest
  def cable_config
    alt_cable_config = super.dup
    alt_cable_config.delete(:url)
    alt_cable_config.merge(host: '127.0.0.1', port: 6379, db: 12)
  end
end
    
    
# replace calls, jmps, and read/write handle/filename references
replaces = []
asm.each_line { |ln|
	if ln =~ /call /
		parts = ln.split(' ')
		if (parts[0] == 'call' and parts[2] == ';call')
			old = parts[1]
			func = parts[3]
			new = addrs[func]
			#puts '%32s: %s -> %x' % [func, old, new]
			replaces << [func, old, new.to_s(16)]
		end
	end
    }
    
    meterp.sock.close

    
      def get_result
    @src.get_result
  end
end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
        def render(context)
      includes_dir = File.join(context.registers[:site].source, '_includes')
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
      class PageFilters < Octopress::Hooks::Page
    def pre_render(page)
      OctopressFilters::pre_filter(page)
    end
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end