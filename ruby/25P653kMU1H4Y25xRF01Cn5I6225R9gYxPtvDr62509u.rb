    You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
        if superenv?
      ENV.keg_only_deps = keg_only_deps
      ENV.deps = formula_deps
      ENV.x11 = reqs.any? { |rq| rq.is_a?(X11Requirement) }
      ENV.setup_build_environment(formula)
      post_superenv_hacks
      reqs.each(&:modify_build_environment)
      deps.each(&:modify_build_environment)
    else
      ENV.setup_build_environment(formula)
      reqs.each(&:modify_build_environment)
      deps.each(&:modify_build_environment)
    
      def describe_python
    python = which 'python'
    return 'N/A' if python.nil?
    python_binary = Utils.popen_read python, '-c', 'import sys; sys.stdout.write(sys.executable)'
    python_binary = Pathname.new(python_binary).realpath
    if python == python_binary
      python
    else
      '#{python} => #{python_binary}'
    end
  end
    
      def self.path(name)
    Formulary.core_path(name)
  end
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
    require 'erubis'
    
            def print(s)
          case s
          when /\A(.*\#.*) = \z/
            runner.new_test($1)
          when /\A(.* s) = \z/
            runner.add_status(' = #$1')
          when /\A\.+\z/
            runner.succeed
          when /\A[EFS]\z/
            runner.failed(s)
          else
            $stdout.print(s)
          end
        end
      end
    end
    
          def EnumKey(hkey, index)
        name = WCHAR_NUL * Constants::MAX_KEY_LENGTH
        size = packdw(Constants::MAX_KEY_LENGTH)
        wtime = ' ' * 8
        check RegEnumKeyExW.call(hkey, index, name, size, 0, 0, 0, wtime)
        [ name.byteslice(0, unpackdw(size) * WCHAR_SIZE), unpackqw(wtime) ]
      end
    
      def test_block
    r = Open3.popen3(RUBY, '-e', 'STDOUT.print STDIN.read') {|i,o,e,t|
      i.print 'baz'
      i.close
      assert_equal('baz', o.read)
      'qux'
    }
    assert_equal('qux', r)
  end
    
          def def_explicit_clean_other_accessor(klass, full_name)
        klass.def_other_element(full_name)
        klass.module_eval(<<-EOC, __FILE__, __LINE__ + 1)
          def #{full_name}?
            Utils::ExplicitCleanOther.parse(#{full_name})
          end
        EOC
      end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end