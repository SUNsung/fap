
        
              prune = ARGV.value 'prune'
    
          # Find commands in the path
      unless (exts = external_commands).empty?
        puts
        puts 'External commands'
        puts_columns exts
      end
    end
  end
    
      def clang_build
    @clang_build ||= MacOS.clang_build_version if MacOS.has_apple_developer_tools?
  end
    
            $stderr.puts
        opoo out
        Homebrew.failed = true
        first_warning = false
      end
    end
    
      def self.path(name)
    Formulary.core_path(name)
  end
    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
      def test_compile_insn_adjuststack
    assert_compile_once('#{<<~'begin;'}\n#{<<~'end;'}', result_inspect: 'true', insns: %i[adjuststack])
    begin;
      x = [true]
      x[0] ||= nil
      x[0]
    end;
  end
    
      def test_duplicated_rest_post
    assert_syntax_error('def foo(*a, a) end', /duplicated argument name/)
    assert_valid_syntax('def foo(*_, _) end')
    (obj = Object.new).instance_eval('def foo(*_, x, _) x end')
    assert_equal(2, obj.foo(1, 2, 3))
    assert_equal(2, obj.foo(2, 3))
    (obj = Object.new).instance_eval('def foo(*_, _, x) x end')
    assert_equal(3, obj.foo(1, 2, 3))
    assert_equal(3, obj.foo(2, 3))
  end
    
      def test_gets_para_extended_file
    [nil, {:textmode=>true}, {:binmode=>true}].each do |mode|
      Tempfile.create('test-extended-file', mode) {|f|
        assert_nil(f.getc)
        f.print '\na'
        f.rewind
        assert_equal('a', f.gets(''), 'mode = <#{mode}>')
      }
    end
  end
    
        def setup
      @cls = SubHash
      super
    end
  end
end

    
        def replace_vars(less)
      less = less.dup
      # skip header comment
      less =~ %r(\A/\*(.*?)\*/)m
      from           = $~ ? $~.to_s.length : 0
      less[from..-1] = less[from..-1].
          gsub(/(?!@mixin|@media|@page|@keyframes|@font-face|@-\w)@/, '$').
          # variables that would be ignored by gsub above: e.g. @page-header-border-color
          gsub(/@(page[\w-]+)/, '$\1')
      less
    end
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    desc 'Convert bootstrap to bootstrap-sass'
task :convert, :branch do |t, args|
  require './tasks/converter'
  Converter.new(branch: args[:branch]).process_bootstrap
end
    
          private
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
    #{stack}
#{executable_path}
### Plugins
    
          def validate!
        super
        raise Informative, 'Existing Podfile found in directory' unless config.podfile_path_in_dir(Pathname.pwd).nil?
        if @project_path
          help! 'Xcode project at #{@project_path} does not exist' unless File.exist? @project_path
          project_path = @project_path
        else
          raise Informative, 'No Xcode project found, please specify one' unless @project_paths.length > 0
          raise Informative, 'Multiple Xcode projects found, please specify one' unless @project_paths.length == 1
          project_path = @project_paths.first
        end
        @xcode_project = Xcodeproj::Project.open(project_path)
      end
    
            #----------------------------------------#
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end
