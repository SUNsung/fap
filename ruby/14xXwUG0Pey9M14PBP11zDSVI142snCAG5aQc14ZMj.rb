
        
              it 'creates a new user' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: '12345678'
        click_on 'Create User'
        expect(page).to have_text('User 'usertest' was successfully created.')
        expect(page).to have_text('test@test.com')
      end
    
        before do
      stub(Agents::DotFoo).valid_type?('Agents::DotFoo') { true }
      stub(Agents::DotBar).valid_type?('Agents::DotBar') { true }
    end
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
      it 'should propagate events' do
    mock(Agent).receive!
    stub.instance_of(IO).puts
    @scheduler.send(:propagate!)
  end
    
    describe Utils do
  describe '#unindent' do
    it 'unindents to the level of the greatest consistant indention' do
      expect(Utils.unindent(<<-MD)).to eq('Hello World')
        Hello World
      MD
    
      describe '#log_for_agent' do
    it 'creates AgentLogs' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(log).not_to be_new_record
      expect(log.agent).to eq(agents(:jane_website_agent))
      expect(log.outbound_event).to eq(events(:jane_website_agent_event))
      expect(log.message).to eq('some message')
      expect(log.level).to eq(4)
    end
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
          # Checks whether this case statement has an `else` branch.
      #
      # @return [Boolean] whether the `case` statement has an `else` branch
      def else?
        loc.else
      end
    end
  end
end

    
            MESSAGES = [
          'Passing safe_level with the 2nd argument of `ERB.new` is ' \
          'deprecated. Do not use it, and specify other arguments as ' \
          'keyword arguments.',
          'Passing trim_mode with the 3rd argument of `ERB.new` is ' \
          'deprecated. Use keyword argument like ' \
          '`ERB.new(str, trim_mode: %<arg_value>s)` instead.',
          'Passing eoutvar with the 4th argument of `ERB.new` is ' \
          'deprecated. Use keyword argument like ' \
          '`ERB.new(str, eoutvar: %<arg_value>s)` instead.'
        ].freeze
    
    
require 'uri'
require 'cgi'
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'paths'))
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'selectors'))
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
    # This stuff needs to be run after Paperclip is defined.
require 'paperclip/io_adapters/registry'
require 'paperclip/io_adapters/abstract_adapter'
require 'paperclip/io_adapters/empty_string_adapter'
require 'paperclip/io_adapters/identity_adapter'
require 'paperclip/io_adapters/file_adapter'
require 'paperclip/io_adapters/stringio_adapter'
require 'paperclip/io_adapters/data_uri_adapter'
require 'paperclip/io_adapters/nil_adapter'
require 'paperclip/io_adapters/attachment_adapter'
require 'paperclip/io_adapters/uploaded_file_adapter'
require 'paperclip/io_adapters/uri_adapter'
require 'paperclip/io_adapters/http_url_proxy_adapter'

    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
        # Hash access of interpolations. Included only for compatibility,
    # and is not intended for normal use.
    def self.[] name
      method(name)
    end