  before do
    Spaceship::Portal::Key.client = mock_client
  end
    
        # Returns the unwrapped subject and body of the last commit
    # <b>DEPRECATED:</b> Use <tt>last_git_commit_message</tt> instead.
    def self.last_git_commit
      UI.important('`last_git_commit` is deprecated. Please use `last_git_commit_message` instead.')
      last_git_commit_message
    end
    
          def self.is_supported?(platform)
        true
      end
    
          it 'automatically removes new lines from the version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(version_number: '1.77.3\n', bump_type: 'major')
        end').runner.execute(:test)
    
      def all_groups(current_user)
    groups = []
    
      it 'understands negative integers' do
    '-3'.to_c.should == Complex(-3)
  end
    
      it 'returns 0.0 if the conversion fails' do
    'bad'.to_f.should == 0.0
    'thx1138'.to_f.should == 0.0
  end
end

    
      it 'ignores trailing characters' do
    '2 foo'.to_r.should == Rational(2, 1)
    '1765, '.to_r.should == Rational(1765, 1)
  end
    
      it 'raises a #{frozen_error_class} if self is frozen' do
    s = 'abcdefghijklmnopqR'.freeze
    lambda { s.tr!('cdefg', '12') }.should raise_error(frozen_error_class)
    lambda { s.tr!('R', 'S')      }.should raise_error(frozen_error_class)
    lambda { s.tr!('', '')        }.should raise_error(frozen_error_class)
  end
end

    
    describe 'String#unpack with format 'c'' do
  it_behaves_like :string_unpack_basic, 'c'
  it_behaves_like :string_unpack_8bit, 'c'
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
        def recheck
      pod = Pod.find(params[:pod_id])
      pod.test_connection!
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-Frame-Options' => 'allow')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('allow')
  end
end
