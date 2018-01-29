
        
          def self.authenticate(user, app_id, json_response, challenges)
    response = U2F::SignResponse.load_from_json(json_response)
    registration = user.u2f_registrations.find_by_key_handle(response.key_handle)
    u2f = U2F::U2F.new(app_id)
    
      # Open3.pipeline_w starts a list of commands as a pipeline with a pipe
  # which connects to stdin of the first command.
  #
  #   Open3.pipeline_w(cmd1, cmd2, ... [, opts]) {|first_stdin, wait_threads|
  #     ...
  #   }
  #
  #   first_stdin, wait_threads = Open3.pipeline_w(cmd1, cmd2, ... [, opts])
  #   ...
  #   first_stdin.close
  #
  # Each cmd is a string or an array.
  # If it is an array, the elements are passed to Process.spawn.
  #
  #   cmd:
  #     commandline                              command line string which is passed to a shell
  #     [env, commandline, opts]                 command line string which is passed to a shell
  #     [env, cmdname, arg1, ..., opts]          command name and one or more arguments (no shell)
  #     [env, [cmdname, argv0], arg1, ..., opts] command name and arguments including argv[0] (no shell)
  #
  #   Note that env and opts are optional, as for Process.spawn.
  #
  # Example:
  #
  #   Open3.pipeline_w('bzip2 -c', :out=>'/tmp/hello.bz2') {|i, ts|
  #     i.puts 'hello'
  #   }
  #
  def pipeline_w(*cmds, **opts, &block)
    in_r, in_w = IO.pipe
    opts[:in] = in_r
    in_w.sync = true
    
      def test_popen2
    with_pipe {|r, w|
      with_reopen(STDERR, w) {|old|
        w.close
        Open3.popen2(RUBY, '-e', 's=STDIN.read; STDOUT.print s+'o'; STDERR.print s+'e'') {|i,o,t|
          assert_kind_of(Thread, t)
          i.print 'z'
          i.close
          STDERR.reopen(old)
          assert_equal('zo', o.read)
          assert_equal('ze', r.read)
        }
      }
    }
  end
    
    Test::Unit::Runner.autorun

    
    assert_equal 'ok', %q{
  require 'tmpdir'
  begin
    tmpname = '#{Dir.tmpdir}/ruby-btest-#{$$}-#{rand(0x100000000).to_s(36)}'
    rw = File.open(tmpname, File::RDWR|File::CREAT|File::EXCL)
  rescue Errno::EEXIST
    retry
  end
  save = STDIN.dup
  STDIN.reopen(rw)
  STDIN.print 'a'
  STDIN.reopen(save)
  rw.close
  File.unlink(tmpname)
  :ok
}
    
      def allow_addr?(addr)
    case @order
    when DENY_ALLOW
      return true if @allow.match(addr)
      return false if @deny.match(addr)
      return true
    when ALLOW_DENY
      return false if @deny.match(addr)
      return true if @allow.match(addr)
      return false
    else
      false
    end
  end
    
      unless defined?(File::NULL)
    if File.exist?('/dev/null')
      File::NULL = '/dev/null'
    end
  end
    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
          def collect_rows(records)
        records.map do |rec|
          Row.new.tap { |row| yield(rec, row) }
        end
      end
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
    # IMPORTANT: The Capistrano::Plugin system is not yet considered a stable,
# public API, and is subject to change without notice. Eventually it will be
# officially documented and supported, but for now, use it at your own risk.
#
# Base class for Capistrano plugins. Makes building a Capistrano plugin as easy
# as writing a `Capistrano::Plugin` subclass and overriding any or all of its
# three template methods:
#
# * set_defaults
# * register_hooks
# * define_tasks
#
# Within the plugin you can use any methods of the Rake or Capistrano DSLs, like
# `fetch`, `invoke`, etc. In cases when you need to use SSHKit's backend outside
# of an `on` block, use the `backend` convenience method. E.g. `backend.test`,
# `backend.execute`, or `backend.capture`.
#
# Package up and distribute your plugin class as a gem and you're good to go!
#
# To use a plugin, all a user has to do is install it in the Capfile, like this:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy
#
# Or, to install the plugin without its hooks:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy, load_hooks: false
#
class Capistrano::Plugin < Rake::TaskLib
  include Capistrano::DSL
    
        # @abstract
    #
    # Create a (new) clone of the remote-repository on the deployment target
    #
    # @return void
    #
    def clone
      raise NotImplementedError, 'Your SCM strategy module should provide a #clone method'
    end
    
      deploy_rb = File.expand_path('../../templates/deploy.rb.erb', __FILE__)
  stage_rb = File.expand_path('../../templates/stage.rb.erb', __FILE__)
  capfile = File.expand_path('../../templates/Capfile', __FILE__)
    
      it 'overrides the rake method, but still prints the rake version' do
    out, _err = capture_io do
      flags '--version', '-V'
    end
    expect(out).to match(/\bCapistrano Version\b/)
    expect(out).to match(/\b#{Capistrano::VERSION}\b/)
    expect(out).to match(/\bRake Version\b/)
    expect(out).to match(/\b#{Rake::VERSION}\b/)
  end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-color: #0f0; ' +
                'border-right-color: #ff0; ' +
                'border-left-color: #00f;'
      bad_rule = 'border-bottom-color: null;'
    
      context 'called with two styles' do
    it 'applies to alternating sides' do
      rule = 'border-style: dotted dashed'
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      ruleset = 'position: fixed; ' +
                'top: 1em; ' +
                'right: 1em; ' +
                'bottom: 1em; ' +
                'left: 1em;'
    
          expect('.all-text-inputs-invalid').to have_ruleset(ruleset)
    end
  end
end
