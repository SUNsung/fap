
        
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
    
          def initialize(gradle_path: nil)
        self.gradle_path = gradle_path
      end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=/tmp/cloc.xml')
      end
    
            expect(result).to eq('hg parent --template '{node|short}'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template '{node|short}'')
      end
    
    unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
      def gist_logs
    raise FormulaUnspecifiedError if ARGV.resolved_formulae.length != 1