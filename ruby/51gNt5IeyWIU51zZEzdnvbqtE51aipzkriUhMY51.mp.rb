
        
                migration3.migrate(:up)
        assert_equal false, Horse.connection.extension_enabled?('hstore')
    
      def test_validates_acceptance_of_with_non_existent_table
    Object.const_set :IncorporealModel, Class.new(ActiveRecord::Base)
    
        describe 'when Upload#extension has not been set' do
      it 'should return the right path' do
        upload.update!(extension: nil)
    
        post.word_count = post.raw.scan(/[[:word:]]+/).size
    
        def generate_upload_url(filename)
      obj = @s3_helper.object(filename)
      raise BackupFileExists.new if obj.exists?
    
      describe 'multisite' do
    it 'has no db cross talk' do
      settings.setting(:hello, 1)
      settings.hello = 100
      settings.provider.current_site = 'boom'
      expect(settings.hello).to eq(1)
    end
  end
    
              paths = entries.map(&:path)
          paths.select { |f| f =~ self.class.filter_regex(@extension) }
        end
    
        notification_service.repository_cleanup_success(project, user)
  end
    
        def aes256_gcm_decrypt(value)
      return unless value
    
            @filters << filter
      end
    
        alias_method :chronic_duration_attr, :chronic_duration_attr_writer
  end
    
          def tag
        MacOS.cat
      end
    end
    
              find_instance_method_call(body_node, :build, :with?) do |method|
            arg = parameters(method).first
            next unless match = regex_match_group(arg, /^-?-?with-(.*)/)
    
              def install
            system 'cargo', 'build'
            ^^^^^^^^^^^^^^^^^^^^^^^ use \'cargo\', \'install\', \'--root\', prefix, \'--path\', \'.\'
          end
        end
      RUBY
    end
  end
end

    
            uses_from_macos('foo')
      end
    
    require 'fileutils'
require 'cask/cache'
require 'cask/quarantine'
require 'cask/verify'
    
      it 'properly handles Casks that are not present' do
    expect {
      described_class.run('notacask')
    }.to raise_error(Cask::CaskUnavailableError)
  end
end

    
      def summary
    s = +''
    s << '#{Emoji.install_badge}  ' if Emoji.enabled?
    s << '#{formula.prefix.resolved_path}: #{formula.prefix.abv}'
    s << ', built in #{pretty_duration build_time}' if build_time
    s.freeze
  end
    
              # Naively checks to see if a given PBXFileReference imports a given
          # path.
          #
          # @param  [PBXFileReference] base_config_ref
          #         A file reference to an `.xcconfig` file.
          #
          # @param  [String] target_config_path
          #         The path to check for.
          #
          SILENCE_WARNINGS_STRING = '// @COCOAPODS_SILENCE_WARNINGS@ //'
          def self.xcconfig_includes_target_xcconfig?(base_config_ref, target_config_path)
            return unless base_config_ref && base_config_ref.real_path.file?
            regex = %r{
              ^(
                (\s*                                  # Possible, but unlikely, space before include statement
                  \#include(\?)?\s+                   # Include statement
                  ['']                                # Open quote
                  (.*\/)?                             # Possible prefix to path
                  #{Regexp.quote(target_config_path)} # The path should end in the target_config_path
                  ['']                                # Close quote
                )
                |
                (#{Regexp.quote(SILENCE_WARNINGS_STRING)}) # Token to treat xcconfig as good and silence pod install warnings
              )
            }x
            base_config_ref.real_path.readlines.find { |line| line =~ regex }
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
    
    module Pod
  module UserInterface
    # Redirects GH-issues delegate callbacks to CocoaPods UI methods.
    #
    class InspectorReporter
      # Called just as the investigation has begun.
      # Lets the user know that it's looking for an issue.
      #
      # @param [query] String unused
      #
      # @param [GhInspector::Inspector] inspector
      #        The current inspector
      #
      # @return [void]
      #
      def inspector_started_query(_, inspector)
        UI.puts 'Looking for related issues on #{inspector.repo_owner}/#{inspector.repo_name}...'
      end
    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
          def string_to_code string
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
    # Commit file to wiki, overwriting previous versions of that file
def commit_test_file(wiki, dir, filename, ext, content)
  committer = Gollum::Committer.new(wiki, :message => 'Added testfile', :parent  => wiki.repo.head.commit)
  committer.add_to_index(dir, filename, ext, content, true)
    committer.after_commit do |committer, sha|
      wiki.clear_cache
      committer.update_working_dir(dir, filename, ext)
    end
  committer.commit
end

    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
        post '/edit/' + CGI.escape('한글'), :page => 'k', :content => '바뀐 text',
         :format                            => 'markdown', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?
    
      # determine file list from git ls-files
  files = `git ls-files`.
    split('\n').
    sort.
    reject { |file| file =~ /^\./ }.
    reject { |file| file =~ /^(rdoc|pkg|test|Home\.md|\.gitattributes)/ }.
    map { |file| '    #{file}' }.
    join('\n')
    
    
    
      s.add_development_dependency 'activesupport', '< 5.0.0' # Please see issue #432
  s.add_development_dependency 'awesome_print', '~> 1.2'
  s.add_development_dependency 'bundler', '>= 1.3'
  s.add_development_dependency 'coveralls', '~> 0.8'
  s.add_development_dependency 'factory_bot', '~> 4.8'
  s.add_development_dependency 'pry', '~> 0.10'
  s.add_development_dependency 'rake', '~> 10.4'
  s.add_development_dependency 'rspec', '~> 3.3'
  s.add_development_dependency 'rubocop', '~> 0.48.1'
  s.add_development_dependency 'simplecov', '~> 0.16'
    
      describe '#render' do
    it 'renders the template' do
      expect(File).to receive(:read).at_least(:once) { 'wemux ls 2>/dev/null' }
    
        def name
      project.name
    end
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }