
        
              it 'shellescapes the exclude_dirs correctly' do
        directory = 'My Dir'
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['#{directory}'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir #{directory.shellescape}')
      end
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
        def name=(value)
      @name = value.try :strip
    end
    
            private
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
          OptionParser.new do |opts|
        opts.banner = 'See full documentation at http://capistranorb.com/.'
        opts.separator ''
        opts.separator 'Install capistrano in a project:'
        opts.separator '    bundle exec cap install [STAGES=qa,staging,production,...]'
        opts.separator ''
        opts.separator 'Show available tasks:'
        opts.separator '    bundle exec cap -T'
        opts.separator ''
        opts.separator 'Invoke (or simulate invoking) a task:'
        opts.separator '    bundle exec cap [--dry-run] STAGE TASK'
        opts.separator ''
        opts.separator 'Advanced options:'
    
        extend Forwardable
    attr_reader :variables
    def_delegators :variables,
                   :set, :fetch, :fetch_for, :delete, :keys, :validate