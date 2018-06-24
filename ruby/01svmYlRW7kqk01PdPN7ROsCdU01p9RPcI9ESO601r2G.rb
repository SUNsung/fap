
        
          def self.repository(tap = nil)
    if tap.nil? || tap.core_tap?
      'bottles'
    else
      'bottles-#{tap.repo}'
    end
  end
end
    
      # True if a {Formula} is being built in 32-bit/x86 mode.
  # This is needed for some use-cases though we prefer to build Universal
  # when a 32-bit version is needed.
  def build_32_bit?
    include?('32-bit') && option_defined?('32-bit')
  end
    
      private
    
        def self.cleanup_path(path)
      if ARGV.dry_run?
        puts 'Would remove: #{path} (#{path.abv})'
      else
        puts 'Removing: #{path}... (#{path.abv})'
        yield
      end
    
              subtree, file = File.split(object['path'])
    
          renamed_formulae << [old_full_name, new_full_name] if @report[:A].include? new_full_name
    end
    
        def parse_symbol_spec(spec, tags)
      case spec
      when :clt
        odisabled ''depends_on :clt''
      when :tex
        odisabled ''depends_on :tex''
      when :libltdl
        output_disabled(spec, 'libtool')
      when :apr
        output_disabled(spec, 'apr-util')
      when :fortran
        output_disabled(spec, 'gcc')
      when :gpg
        output_disabled(spec, 'gnupg')
      when :hg
        output_disabled(spec, 'mercurial')
      when :mpi
        output_disabled(spec, 'open-mpi')
      when :python, :python2
        output_disabled(spec, 'python@2')
      when :python3
        output_disabled(spec, 'python')
      when :ant, :autoconf, :automake, :bsdmake, :cairo, :emacs, :expat,
           :fontconfig, :freetype, :libtool, :libpng, :mysql, :perl, :pixman,
           :postgresql, :rbenv, :ruby
        output_disabled(spec)
      else
        super
      end
    end
    
            if version.head?
          Version.create('HEAD')
        else
          version.dup
        end
      end
    end
    patches.each { |p| p.owner = self }
  end
    
    desc 'Test all Gemfiles from test/*.gemfile'
task :test_all_gemfiles do
  require 'term/ansicolor'
  require 'pty'
  require 'shellwords'
  cmd      = 'bundle install --quiet && bundle exec rake --trace'
  statuses = Dir.glob('./test/gemfiles/*{[!.lock]}').map do |gemfile|
    env = {'BUNDLE_GEMFILE' => gemfile}
    cmd_with_env = '  (#{env.map { |k, v| 'export #{k}=#{Shellwords.escape v}' } * ' '}; #{cmd})'
    $stderr.puts Term::ANSIColor.cyan('Testing\n#{cmd_with_env}')
    PTY.spawn(env, cmd) do |r, _w, pid|
      begin
        r.each_line { |l| puts l }
      rescue Errno::EIO
        # Errno:EIO error means that the process has finished giving output.
      ensure
        ::Process.wait pid
      end
    end
    [$? && $?.exitstatus == 0, cmd_with_env]
  end
  failed_cmds = statuses.reject(&:first).map { |(_status, cmd_with_env)| cmd_with_env }
  if failed_cmds.empty?
    $stderr.puts Term::ANSIColor.green('Tests pass with all gemfiles')
  else
    $stderr.puts Term::ANSIColor.red('Failing (#{failed_cmds.size} / #{statuses.size})\n#{failed_cmds * '\n'}')
    exit 1
  end
end
    
    namespace :bower do
    
        # Returns a representation of the query as an array of strings and
    # potentially {Sass::Script::Tree::Node}s (if there's interpolation in it).
    # When the interpolation is resolved and the strings are joined together,
    # this will be the string representation of this query.
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    def to_a
      Sass::Util.intersperse(queries.map {|q| q.to_a}, ', ').flatten
    end
    
        # The type of interpolation deprecation for this node.
    #
    # This can be `:none`, indicating that the node doesn't use deprecated
    # interpolation; `:immediate`, indicating that a deprecation warning should
    # be emitted as soon as possible; or `:potential`, indicating that a
    # deprecation warning should be emitted if the resulting string is used in a
    # way that would distinguish it from a list.
    #
    # @return [Symbol]
    attr_reader :deprecation