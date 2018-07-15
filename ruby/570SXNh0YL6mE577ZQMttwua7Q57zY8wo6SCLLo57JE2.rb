
        
          describe '.all' do
    it 'uses the client to fetch all keys' do
      mock_client_response(:list_keys, with: no_args) do
        [
          {
            canDownload: false,
            canRevoke: true,
            keyId: 'some-key-id',
            keyName: 'Test Key via fastlane',
            servicesCount: 2
          },
          {
            canDownload: true,
            canRevoke: true,
            keyId: 'B92NE4F7RG',
            keyName: 'Test Key via browser',
            servicesCount: 2
          }
        ]
      end
    
          # All the available tasks
      attr_accessor :tasks
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to match(/cd .* && agvtool new-marketing-version 1.77.3/)
      end
    
        def javascripts_path
      File.join assets_path, 'javascripts'
    end
    
      # Code is not reloaded between requests.
  config.cache_classes = true
    
    desc 'LESS to stdin -> Sass to stdout'
task :less_to_scss, :branch do |t, args|
  require './tasks/converter'
  puts Converter.new(branch: args[:branch]).convert_less(STDIN.read)
end
    
            def matches? subject
          @subject = subject
          @subject = @subject.new if @subject.class == Class
          @allowed_types && @rejected_types &&
          allowed_types_allowed? && rejected_types_rejected?
        end
    
          class ValidateAttachmentPresenceMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
            protected