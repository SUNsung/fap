
        
              key = Spaceship::Portal::Key.create(name: 'New Key', apns: true, device_check: true, music_id: 'some-music-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('a-new-key-id')
    end
  end
    
        class AdbHelper
      # Path to the adb binary
      attr_accessor :adb_path
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml')
      end
    
          it 'gets the correct version number with no target specified' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject')
        end').runner.execute(:test)
        expect(result).to eq('4.3.2')
      end
    
    def process_args
  until ARGV.empty?
    if ARGV.first =~ %r{^-+t(?:est)?$} && ARGV.length > 1
      ARGV.shift
      $opt_test = ARGV.shift
    elsif ARGV.first =~ %r{^-+h(?:elp)?$}
      puts usage
      exit 0
    else
      puts usage
      exit 1
    end
  end
end
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
end
    
          def encrypt(value)
        options[:encryptor].hexdigest value.to_s
      end
    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
      # These two settings work together to allow you to limit a spec run
  # to individual examples or groups you care about by tagging them with
  # `:focus` metadata. When nothing is tagged with `:focus`, all examples
  # get run.
  config.filter_run :focus
  config.run_all_when_everything_filtered = true
    
            def operator_assignment_node
          return nil unless node.parent
          return nil unless OPERATOR_ASSIGNMENT_TYPES.include?(node.parent.type)
          return nil unless node.sibling_index.zero?
          node.parent
        end
    
            def autocorrect(node)
          lambda do |corrector|
            each_unnecessary_space_match(node) do |range|
              corrector.replace(range, ' ')
            end
          end
        end
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
            def_node_matcher :redundant_regex?, <<-PATTERN
          {(send $!nil? {:match :=~} (regexp (str $#literal_at_start?) (regopt)))
           (send (regexp (str $#literal_at_start?) (regopt)) {:match :=~} $_)}
        PATTERN
    
                add_offense(void_next) if void_next
          end
        end
    
            def variable_name(node)
          node.children[0]
        end
    
              private
    
          def started?
        true
      end
    
      public
  def decode(data)
    raise '#{self.class}#decode must be overidden'
  end # def decode
    
      extend self