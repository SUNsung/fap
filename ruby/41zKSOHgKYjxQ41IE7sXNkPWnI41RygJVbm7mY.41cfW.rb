
        
              if @verify_block
        begin
          @verify_block.call(value)
        rescue => ex
          UI.error('Error setting value '#{value}' for option '#{@key}'')
          raise Interface::FastlaneError.new, ex.to_s
        end
      end
    
        def run
      program :name, 'cert'
      program :version, Fastlane::VERSION
      program :description, 'CLI for \'cert\' - Create new iOS code signing certificates'
      program :help, 'Author', 'Felix Krause <cert@krausefx.com>'
      program :help, 'Website', 'https://fastlane.tools'
      program :help, 'Documentation', 'https://docs.fastlane.tools/actions/cert/'
      program :help_formatter, :compact
    
            def preload_commit_authors
          # This also preloads the author of every commit. We're using 'lazy_author'
          # here since 'author' immediately loads the data on the first call.
          @pipeline.commit.try(:lazy_author)
        end
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
            def collection_method
          :issues_comments
        end
    
            # Builds a note from a GitHub API response.
        #
        # note - An instance of `Sawyer::Resource` containing the note details.
        def self.from_api_response(note)
          matches = note.html_url.match(NOTEABLE_TYPE_REGEX)
    
      describe '#highlighted?' do
    it 'understands hl=6-8' do
      stub(params).[](:hl) { '6-8' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [6, 7, 8]
    end
    
          it 'runs until stop is called' do
        mock.instance_of(Rufus::Scheduler).join
        Thread.new { while @agent_runner.instance_variable_get(:@running) != false do sleep 0.1; @agent_runner.stop end }
        @agent_runner.run
      end
    
      let :new_template do
    {
      'description' => '{{ hovertext }}',
      'comment' => '{{ comment }}'
    }
  end
    
      describe '#log_for_agent' do
    it 'creates AgentLogs' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(log).not_to be_new_record
      expect(log.agent).to eq(agents(:jane_website_agent))
      expect(log.outbound_event).to eq(events(:jane_website_agent_event))
      expect(log.message).to eq('some message')
      expect(log.level).to eq(4)
    end
    
        it 'should raise error when response says unauthorized' do
      stub(HTTParty).post { {'Response' => 'Not authorized'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Not authorized/)
    end
    
    def to_integer(proc)
  proc[-> n { n + 1 }][0]
end
    
    Given /^I run a paperclip generator to add a paperclip '([^']*)' to the '([^']*)' model$/ do |attachment_name, model_name|
  step %[I successfully run `rails generate paperclip #{model_name} #{attachment_name}`]
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

    
        def type_from_file_command
      @type_from_file_command ||=
        FileCommandContentTypeDetector.new(@filepath).detect
    end
  end
end

    
        # Returns the width and height in a format suitable to be passed to Geometry.parse
    def to_s
      s = ''
      s << width.to_i.to_s if width > 0
      s << 'x#{height.to_i}' if height > 0
      s << modifier.to_s
      s
    end