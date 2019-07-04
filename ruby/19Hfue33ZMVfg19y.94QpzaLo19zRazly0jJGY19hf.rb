
        
            if cors_origins
      if origin = env['HTTP_ORIGIN']
        origin = nil unless cors_origins.include?(origin)
      end
    
      def self.cleanup!
    DB.exec(<<~SQL)
      DELETE FROM drafts
       WHERE sequence < (
        SELECT MAX(s.sequence)
          FROM draft_sequences s
         WHERE s.draft_key = drafts.draft_key
           AND s.user_id = drafts.user_id
      )
    SQL
    
        SCRIPT_ASSET_DIRECTORIES = [
      # [dir, can_use_s3_cdn, can_use_cdn]
      ['/assets/',             true, true],
      ['/brotli_asset/',       true, true],
      ['/extra-locales/',      false, false],
      ['/highlight-js/',       false, true],
      ['/javascripts/',        false, true],
      ['/plugins/',            false, true],
      ['/theme-javascripts/',  false, true],
      ['/svg-sprite/',         false, true],
    ]
    
        plugin.activate!
    Discourse.plugins << plugin
    
          if SvgSprite.version(theme_ids) != params[:version]
        return redirect_to path(SvgSprite.path(theme_ids))
      end
    
        # Not using this during integration tests makes the tests 4x times faster
    # without changing the coverage.
    track_files '#{SimpleCov.root}/{#{subdirs},*.rb}'
  end
    
        def self.can_extract?(path)
      mime_type = 'application/vnd.adobe.air-application-installer-package+zip'
      path.magic_number.match?(/.{59}#{Regexp.escape(mime_type)}/)
    end
    
    def main
  @ruby = File.expand_path('miniruby')
  @verbose = false
  $VERBOSE = false
  $stress = false
  @color = nil
  @tty = nil
  @quiet = false
  dir = nil
  quiet = false
  tests = nil
  ARGV.delete_if {|arg|
    case arg
    when /\A--ruby=(.*)/
      @ruby = $1
      @ruby.gsub!(/^([^ ]*)/){File.expand_path($1)}
      @ruby.gsub!(/(\s+-I\s*)((?!(?:\.\/)*-(?:\s|\z))\S+)/){$1+File.expand_path($2)}
      @ruby.gsub!(/(\s+-r\s*)(\.\.?\/\S+)/){$1+File.expand_path($2)}
      true
    when /\A--sets=(.*)/
      tests = Dir.glob('#{File.dirname($0)}/test_{#{$1}}*.rb').sort
      puts tests.map {|path| File.basename(path) }.inspect
      true
    when /\A--dir=(.*)/
      dir = $1
      true
    when /\A(--stress|-s)/
      $stress = true
    when /\A--color(?:=(?:always|(auto)|(never)|(.*)))?\z/
      warn 'unknown --color argument: #$3' if $3
      @color = $1 ? nil : !$2
      true
    when /\A--tty(=(?:yes|(no)|(.*)))?\z/
      warn 'unknown --tty argument: #$3' if $3
      @tty = !$1 || !$2
      true
    when /\A(-q|--q(uiet))\z/
      quiet = true
      @quiet = true
      true
    when /\A(-v|--v(erbose))\z/
      @verbose = true
    when /\A(-h|--h(elp)?)\z/
      puts(<<-End)
Usage: #{File.basename($0, '.*')} --ruby=PATH [--sets=NAME,NAME,...]
        --sets=NAME,NAME,...        Name of test sets.
        --dir=DIRECTORY             Working directory.
                                    default: /tmp/bootstraptestXXXXX.tmpwd
        --color[=WHEN]              Colorize the output.  WHEN defaults to 'always'
                                    or can be 'never' or 'auto'.
    -s, --stress                    stress test.
    -v, --verbose                   Output test name before exec.
    -q, --quiet                     Don\'t print header message.
    -h, --help                      Print this message and quit.
End
      exit true
    when /\A-j/
      true
    else
      false
    end
  }
  if tests and not ARGV.empty?
    $stderr.puts '--tests and arguments are exclusive'
    exit false
  end
  tests ||= ARGV
  tests = Dir.glob('#{File.dirname($0)}/test_*.rb').sort if tests.empty?
  pathes = tests.map {|path| File.expand_path(path) }
    
      def test_keep_if
    h1 = {}
    ENV.each_pair {|k, v| h1[k] = v }
    ENV['test'] = 'foo'
    ENV.keep_if {|k, v| IGNORE_CASE ? k.upcase != 'TEST' : k != 'test' }
    h2 = {}
    ENV.each_pair {|k, v| h2[k] = v }
    assert_equal(h1, h2)
    
    src_testdir = File.dirname(File.realpath(__FILE__))
$LOAD_PATH << src_testdir
tool_dir = File.join src_testdir, '..', 'tool'
$LOAD_PATH.unshift '#{tool_dir}/lib'
    
    class Object # :nodoc:
    
          ##
      # Is this running on mri?
    
        output.gsub!(/ = \d+.\d\d s = /, ' = 0.00 s = ')
    output.gsub!(/0x[A-Fa-f0-9]+/, '0xXXX')
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
        it 'should return a dummy value in the json version' do
      FactoryGirl.create(:notification, recipient: alice, target: post)
      get :read_all, format: :json
      expect(response).not_to be_redirect
    end
  end
end

    
          it 'should not create the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).not_to exist
        expect(response.code).to eq('403')
      end
    end
  end
    
        context 'for a logged out user' do
      before do
        sign_out :user
      end
    
          it 'succeeds on mobile' do
        get :public, format: :mobile
        expect(response).to be_success
      end
    end
    
        it 'rejects invalid jsfiddle link' do
      expect do
        generate_new_liquid('invalid_jsfiddle_link')
      end.to raise_error(StandardError)
    end
    
    # enable logging
FPM::Util.send :module_function, :logger
FPM::Util.logger.level = :info
FPM::Util.logger.subscribe STDERR
    
      # KNOWN ISSUE:
  # If an un-matched bracket is used in valid bash, as in
  # `echo '{'`, this function will choke.
  # However, to cover this case basically
  # requires writing almost half a bash parser,
  # and it is a very small corner case.
  # Otherwise, this approach is very robust.
  def gobble_function(cons,prod)
    level = 1
    while level > 0
      line = cons.next
      # Not the best, but pretty good
      # short of writing an *actual* sh
      # parser
      level += line.count '{'
      level -= line.count '}'
      if level > 0
        prod.push(line.rstrip())
      else
        fine = line.sub(/\s*[}]\s*$/, '')
        if !(fine =~ /^\s*$/)
          prod.push(fine.rstrip())
        end
      end
    end
  end # def gobble_function
    
        # Add the tar compression flag if necessary
    tar_compression_flag(input_path).tap do |flag|
      args << flag unless flag.nil?
    end
    
              if tmux_version == 'master'
            TMUX_MASTER_VERSION
          else
            tmux_version.to_f
          end
        end
      end
    
        COMMANDS = {
      commands: 'Lists commands available in tmuxinator',
      completions: 'Used for shell completion',
      new: 'Create a new project file and open it in your editor',
      edit: 'Alias of new',
      open: 'Alias of new',
      start: %w{
        Start a tmux session using a project's name (with an optional [ALIAS]
        for project reuse) or a path to a project config file (via the -p flag)
      }.join(' '),
      stop: 'Stop a tmux session using a project's tmuxinator config',
      local: 'Start a tmux session using ./.tmuxinator.yml',
      debug: 'Output the shell commands that are generated by tmuxinator',
      copy: %w{
        Copy an existing project to a new project and
        open it in your editor
      }.join(' '),
      delete: 'Deletes given project',
      implode: 'Deletes all tmuxinator projects',
      version: 'Display installed tmuxinator version',
      doctor: 'Look for problems in your configuration',
      list: 'Lists all tmuxinator projects'
    }.freeze