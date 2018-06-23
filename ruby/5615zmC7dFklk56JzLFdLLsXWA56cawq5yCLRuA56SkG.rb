
        
          describe 'when passed Integer' do
    it 'returns the Rational value of self raised to the passed argument' do
      (Rational(3, 4) ** 4).should == Rational(81, 256)
      (Rational(3, 4) ** -4).should == Rational(256, 81)
      (Rational(-3, 4) ** -4).should == Rational(256, 81)
      (Rational(3, -4) ** -4).should == Rational(256, 81)
    
      def test_lambda_longjmp
    assert_eval_with_jit('#{<<~'begin;'}\n#{<<~'end;'}', stdout: '5', success_count: 1)
    begin;
      fib = lambda do |x|
        return x if x == 0 || x == 1
        fib.call(x-1) + fib.call(x-2)
      end
      print fib.call(5)
    end;
  end
    
        assert_raise(LocalJumpError, bug11873) do
      bug11873.instance_eval do
        p p{p(p);p p}, tap do
          raise SyntaxError, 'should not be passed to tap'
        end
      end
    end
  end
    
      def test_open_tempfile_path
    Dir.mktmpdir(__method__.to_s) do |tmpdir|
      begin
        io = File.open(tmpdir, File::RDWR | File::TMPFILE)
      rescue Errno::EINVAL
        skip 'O_TMPFILE not supported (EINVAL)'
      rescue Errno::EOPNOTSUPP
        skip 'O_TMPFILE not supported (EOPNOTSUPP)'
      end
    
        x = Hash.new
    def x.default(k)
      $z = k
      self[k] = k*2
    end
    $z = 0
    assert_equal(44, x[22])
    assert_equal(22, $z)
    $z = 0
    assert_equal(44, x[22])
    assert_equal(0, $z)
  end
    
        assert_equal(set.size, enum.size)
    assert_same(set, enum.each  { |i|
      case i
      when Numeric
        i * 2
      when String
        i.upcase
      else
        nil
      end
    })
    assert_equal(Set[2,4,6,'A','B','C',nil], set)
  end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['abc',                  [nil, nil, nil]],
      ['\x8f\xc2\xb5?abc',     [1.4199999570846558, nil, nil]],
      ['\x9a\x999@33\xb3?abc', [2.9000000953674316, 1.399999976158142, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
      class Honda < Car
    def initialize(*args)
      self.make = 'Honda'
      super(*args)
    end
  end
    
    lib_path = root.join('lib').to_path
    
          when :login_fail
    
                  s[:proto] = 'tcp'
              s[:name]  = 'pop3'
              s[:extra] = 'Successful Login. Banner: #{s[:banner]}'
              report_auth_info(s)
              print_status('Successful POP3 Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
    
    When /^(?:|I )check '([^']*)'$/ do |field|
  check(field)
end
    
            def has_column?
          @subject.column_names.include?('#{@attachment_name}_file_name')
        end
      end
    end
  end
end

    
        rake_tasks { load 'tasks/paperclip.rake' }
  end
    
          def has_attached_file(*attachment_names)
        ActiveSupport::Deprecation.warn 'Method `t.has_attached_file` in the migration has been deprecated and will be replaced by `t.attachment`.'
        attachment(*attachment_names)
      end
    end
    
        ::Paperclip::REQUIRED_VALIDATORS = [AttachmentFileNameValidator, AttachmentContentTypeValidator, AttachmentFileTypeIgnoranceValidator]