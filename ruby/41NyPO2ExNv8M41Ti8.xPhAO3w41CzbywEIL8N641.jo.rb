
        
        def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
        attr_reader :filters
    
        def initialize(content)
      @content = content
      @html = document? ? parse_as_document : parse_as_fragment
    end
    
              node['data-language'] = 'typescript' if node['path'].try(:ends_with?, '.ts')
          node['data-language'] = 'html' if node['path'].try(:ends_with?, '.html')
          node['data-language'] = 'css' if node['path'].try(:ends_with?, '.css')
          node['data-language'] = 'js' if node['path'].try(:ends_with?, '.js')
          node['data-language'] = 'json' if node['path'].try(:ends_with?, '.json')
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip if node['language']
          node['data-language'] ||= 'typescript' if node.content.start_with?('@')
    
            css('a[id]:empty').each do |node|
          node.next_element['id'] = node['id'] if node.next_element
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
              if formula_tap == 'homebrew-core' && (depends_on?('veclibfort') || depends_on?('lapack'))
            problem 'Formulae should use OpenBLAS as the default serial linear algebra library.'
          end
    
        it 'unless conditional dependency with build.without?' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          depends_on :foo unless build.without? 'foo'
          ^^^^^^^^^^^^^^^ Replace depends_on :foo unless build.without? 'foo' with depends_on :foo => :recommended
        end
      RUBY
    end
    
        it 'when veclibfort is used instead of OpenBLAS' do
      expect_offense(<<~RUBY, '/homebrew-core/')
        class Foo < Formula
          url 'https://brew.sh/foo-1.0.tgz'
          homepage 'https://brew.sh'
          depends_on 'veclibfort'
          ^^^^^^^^^^^^^^^^^^^^^^^ Formulae should use OpenBLAS as the default serial linear algebra library.
        end
      RUBY
    end
    
        return false if args[:before] && OS::Mac.version >= args[:before]
    
      def recursive_requirements
    Requirement.expand(self)
  end
    
        def prerelease?
      version > latest_stable_version
    end
    
          def update_instructions
        if MacOS.version >= '10.14'
          <<~EOS
            Update them from Software Update in System Preferences.
          EOS
        else
          <<~EOS
            Update them from Software Update in the App Store.
          EOS
        end
      end
    
          if @quarantine
        Quarantine.cask!(cask: @cask, download_path: @downloaded_path)
      else
        Quarantine.release!(download_path: @downloaded_path)
      end
    end
  end
end

    
          def initialize(*args)
        super
        @comparison_cache = {}
      end
    
        def detect_command_and_arguments(*args)
      command = args.find do |arg|
        if self.class.commands.include?(arg)
          true
        else
          break unless arg.start_with?('-')
        end
      end
    
          def self.help
        'upgrades all outdated casks'
      end
    end
  end
end

    
    # Resource is the fundamental representation of an external resource. The
# primary formula download, along with other declared resources, are instances
# of this class.
class Resource
  include FileUtils
    
        # use Feedbag as a backup to Google Feeds Api
    if rss_url.nil?
      rss_url = Feedbag.find(web_url).first
      if rss_url.nil?
        suggested_paths = ['/rss', '/feed', '/feeds', '/atom.xml', '/feed.xml', '/rss.xml', '.atom']
        suggested_paths.each do |suggested_path|
          rss_url = Feedbag.find('#{web_url.chomp('/')}#{suggested_path}').first
          break if rss_url
        end
      end
    end
  end
    
        desc 'Check directories of files to be linked exist in shared'
    task :make_linked_dirs do
      next unless any? :linked_files
      on release_roles :all do |_host|
        execute :mkdir, '-p', linked_file_dirs(shared_path)
      end
    end
    
    Given(/^a custom task that will simulate a failure$/) do
  safely_remove_file(TestApp.shared_path.join('failed'))
  TestApp.copy_task_to_test_app('spec/support/tasks/fail.rake')
end
    
        def dry_run
      ['--dry-run', '-n',
       'Do a dry run without executing actions',
       lambda do |_value|
         Configuration.env.set(:sshkit_backend, SSHKit::Backend::Printer)
       end]
    end
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
          def roles_array
        roles.to_a
      end