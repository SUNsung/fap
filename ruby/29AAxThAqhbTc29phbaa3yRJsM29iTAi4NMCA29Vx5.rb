
        
          attr_reader :topic, :options
    
        it 'supports one and other' do
      override_translation('en', 'items.one', 'one fish')
      override_translation('en', 'items.other', '%{count} fishies')
      expect(I18n.t('items', count: 13)).to eq('13 fishies')
      expect(I18n.t('items', count: 1)).to eq('one fish')
    end
    
        stats = {}
    unique_users = {}
    
                problem 'Use \'if build.#{match[1].downcase}?\' instead'
          end
    
      def flags_only
    select { |arg| arg.start_with?('--') }
  end
    
        it 'uses older tags when needed', :needs_macos do
      subject[:mavericks] = 'foo'
      expect(subject.send(:find_matching_tag, :mavericks)).to eq(:mavericks)
      expect(subject.send(:find_matching_tag, :yosemite)).to eq(:mavericks)
    end
    
        args.present?
  end
end

    
      def checksums
    tags = collector.keys.sort_by do |tag|
      # Sort non-MacOS tags below MacOS tags.
      begin
        OS::Mac::Version.from_symbol tag
      rescue ArgumentError
        '0.#{tag}'
      end
    end
    checksums = {}
    tags.reverse_each do |tag|
      checksum = collector[tag]
      checksums[checksum.hash_type] ||= []
      checksums[checksum.hash_type] << { checksum => tag }
    end
    checksums
  end
end
    
          expect(f.class.stable.deps.first.name).to eq('foo')
      expect(f.class.devel.deps.first.name).to eq('foo')
      expect(f.class.head.deps.first.name).to eq('foo')
    end
  end
end

    
          expect(spec.deps.first.name).to eq('foo')
    end
    
    require 'cask/cmd/abstract_internal_command'
require 'cask/cmd/internal_help'
require 'cask/cmd/internal_stanza'
    
          # For OS::Mac::Version compatability
      def requires_nehalem_cpu?
        Hardware.oldest_cpu(self) == :nehalem
      end
      # https://en.wikipedia.org/wiki/Nehalem_(microarchitecture)
      # Ensure any extra methods are also added to version/null.rb
      alias requires_sse4? requires_nehalem_cpu?
      alias requires_sse41? requires_nehalem_cpu?
      alias requires_sse42? requires_nehalem_cpu?
      alias requires_popcnt? requires_nehalem_cpu?
    end
  end
end

    
          subdir
    end
    
          Pathname('#{@cask.metadata_versioned_path}.upgrading')
    end
    
        def get_pane_base_index
      tmux_config['pane-base-index']
    end
    
      match do
    result = is_pane
    
    require 'tmuxinator'
require 'factory_bot'
    
            get '/bool', bool: 1
        expect(last_response.status).to eq(200)
        expect(last_response.body).to eq('TrueClass')
    
          private