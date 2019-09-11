
        
                # @event randomly becomes 'OnCompleted' here. Try to wait until it matches.
        # https://ci.appveyor.com/project/ruby/ruby/builds/19963142/job/8gaxepksa0i3b998
        assert_match_with_retries(/OnObjectReady/, :@event)
      end
    
        assert_equal (0),                                          CMath.atan2(0,1)
    assert_in_delta (1.3389725222944935+0.4023594781085251i),  CMath.atan2(1+2i,1)
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.atan2('0', 1) }
  end
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
    describe 'GzipReader#rewind' do
    
      before do
    @zeros    = Zlib::Deflate.deflate('0' * 100_000)
    @inflator = Zlib::Inflate.new
    @chunks   = []
    
        # Ensure that the master spec repo exists
    #
    # @return [void]
    #
    def ensure_master_spec_repo_exists!
      unless config.sources_manager.master_repo_functional?
        Setup.new(CLAide::ARGV.new([])).run
      end
    end
    
        it 'returns the right output' do
      cmd = ['-e', <<-RB]
        puts 'foo'
        puts 'bar'
      RB
      Executable.execute_command('ruby', cmd, true).should == 'foo\nbar\n'
    end
    
          # Creates a default app host 'main.m' file.
      #
      # @param  [Project] project
      #         the Xcodeproj to generate the target into.
      #
      # @param  [Symbol] platform
      #         the platform of the target. Can be `:ios` or `:osx`.
      #
      # @param  [String] name
      #         The name of the folder to use and save the generated main file.
      #
      # @return [Pathname] the new source file that was generated.
      #
      def self.create_app_host_main_file(project, platform, name = 'App')
        source_file = project.path.dirname.+('#{name}/main.m')
        source_file.parent.mkpath
        source_file.open('w') do |f|
          case platform
          when :ios, :tvos
            f << IOS_APP_HOST_MAIN_CONTENTS
          when :osx
            f << MACOS_APP_HOST_MAIN_CONTENTS
          end
        end
        source_file
      end
    
          def unlocked_pods
        @unlocked_pods ||= begin
          pods = []
          UI.titled_section('Analyzing dependencies') do
            pods = Installer::Analyzer.new(config.sandbox, config.podfile).
              analyze(:outdated).
              specs_by_target.values.flatten.uniq
          end
          pods
        end
      end
    
      autoload :AggregateTarget,           'cocoapods/target/aggregate_target'
  autoload :Command,                   'cocoapods/command'
  autoload :Deintegrator,              'cocoapods_deintegrate'
  autoload :Executable,                'cocoapods/executable'
  autoload :ExternalSources,           'cocoapods/external_sources'
  autoload :Installer,                 'cocoapods/installer'
  autoload :HooksManager,              'cocoapods/hooks_manager'
  autoload :PodTarget,                 'cocoapods/target/pod_target'
  autoload :Project,                   'cocoapods/project'
  autoload :Resolver,                  'cocoapods/resolver'
  autoload :Sandbox,                   'cocoapods/sandbox'
  autoload :Target,                    'cocoapods/target'
  autoload :Validator,                 'cocoapods/validator'
    
            # @return [Project] Generated and prepared project.
        #
        def generate!
          project = create_project(path, object_version, pod_target_subproject)
          prepare(sandbox, project, pod_targets, build_configurations, platforms, podfile_path)
          project
        end
    
          # @param  [Pathname] framework
      #         The vendored framework to search into.
      # @return [Pathname] The path of the header directory of the
      #         vendored framework.
      #
      def self.vendored_frameworks_headers_dir(framework)
        dir = framework + 'Headers'
        dir.directory? ? dir.realpath : dir
      end
    
            self.indentation_level += relative_indentation
        self.title_level += 1
        yield if block_given?
      ensure
        self.indentation_level -= relative_indentation
        self.title_level -= 1
      end
    
          # Called when there have been networking issues in creating the report.
      #
      # @param [Error] error
      #        The error returned during networking
      #
      # @param [String] query
      #        The original search query
      #
      # @param [GhInspector::Inspector] inspector
      #        The current inspector
      #
      # @return [void]
      #
      def inspector_could_not_create_report(error, query, inspector)
        safe_query = URI.escape query
        UI.puts 'Could not access the GitHub API, you may have better luck via the website.'
        UI.puts 'https://github.com/#{inspector.repo_owner}/#{inspector.repo_name}/search?q=#{safe_query}&type=Issues&utf8=✓'
        UI.puts 'Error: #{error.name}'
      end
    
          def third_party_scm_name?
        !built_in_scm_name?
      end
    
        it { expect(alias_node.old_identifier.sym_type?).to be(true) }
    it { expect(alias_node.old_identifier.children.first).to eq(:bar) }
  end
end

    
            def correct_for_blockarg_type(node)
          lambda do |corrector|
            range = range_with_surrounding_space(range: node.source_range,
                                                 side: :left)
            range = range_with_surrounding_comma(range, :left)
            corrector.remove(range)
          end
        end
      end
    end
  end
end

    
              something_else
        RUBY
      end
    end
    
      context 'when an access modifier is followed by a ' \
    'class method defined on constant' do
    it 'registers an offense' do
      expect_offense(<<~RUBY)
        class SomeClass
          protected
          ^^^^^^^^^ Useless `protected` access modifier.
          def SomeClass.some_method
          end
        end
      RUBY
    end
  end
    
          def on_send(node)
        rhs = extract_rhs(node)
    
        context 'with a ternary operator' do
      let(:source) { 'foo? ? :foo : 42' }