
        
          def self.fragment_cache
    @cache ||= DistributedCache.new('am_serializer_fragment_cache')
  end
    
      before do
    Spaceship::Portal::Key.client = mock_client
  end
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to match(/cd .* && agvtool new-marketing-version 2.0.0/)
      end
    
      def id
    object.id.to_s
  end
    
        HTTP.get(source).to_s.split('\n').each do |line|
      next if line.start_with? '#'
      parts = line.split(';').map(&:strip)
      next if parts.size < 2
      codes << [parts[0], parts[1].start_with?('fully-qualified')]
    end