
        
              key = Spaceship::Portal::Key.find('some-key-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('some-key-id')
    end
  end
    
            if params[:add_to_search_list]
          keychains = Action.sh('security list-keychains -d user').shellsplit
          keychains << File.expand_path(keychain_path)
          commands << Fastlane::Actions.sh('security list-keychains -s #{keychains.shelljoin}', log: false)
        end
    
          it 'raises an exception when xcode project path wasn't found' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            increment_version_number(xcodeproj: '/nothere')
          end').runner.execute(:test)
        end.to raise_error('Could not find Xcode project')
      end
    
      protected
    
          included do
        include Devise::Controllers::ScopedViews
      end
    
    (allow file-write*
  (literal
    '/dev/dtracehelper'
    '/dev/null'
  )
  (regex
    #'^<%= Pod::Config.instance.project_root %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
    #'^/Users/[^.]+/Library/Caches/CocoaPods/*'
    #'^/dev/tty'
    #'^/private/var'
  )
)
    
            def initialize(argv)
          @name = argv.shift_argument
          @template_url = argv.option('template-url', TEMPLATE_REPO)
          super
          @additional_args = argv.remainder!
        end
    
            self.description = <<-DESC
          Lints the spec-repo `NAME`. If a directory is provided it is assumed
          to be the root of a repo. Finally, if `NAME` is not provided this
          will lint all the spec-repos known to CocoaPods.
        DESC
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
    module Jekyll
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
            # 'match' is a fairly generic name, so we don't flag it unless we see
        # a string or regexp literal on one side or the other
        def_node_matcher :match_call?, <<-PATTERN
          {(send {str regexp} :match _)
           (send !nil? :match {str regexp})}
        PATTERN
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)
    
      context 'symmetrical style' do
    let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }