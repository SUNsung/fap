
        
        require 'abstract_unit'
    
          def sekrit_data
        self.response_body = (@list + [@authenticated]).join(', ')
      end
    
      test 'successful authentication request with Bearer instead of Token' do
    @request.env['HTTP_AUTHORIZATION'] = 'Bearer lifo'
    get :index
    
        test 'the middleware stack is exposed as 'middleware' in the controller' do
      result = @app.call(env_for('/'))
      assert_equal 'First!', result[1]['Middleware-Order']
    end
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        def add(path, content)
      @pages[path] = content
    end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
          # Renders the template using the class intance as the binding. Because the
      # renderer inherits from `OpenStruct`, additional view variables can be
      # added like normal accessors.
      #
      # @return [String]
      def render
        old_template = template
        result = nil
        File.open(full_template_path, 'r') do |f|
          self.template = f.read
          result = render_string
        end
    
      def test_repeated_combination_with_callcc
    need_continuation
    n = 1000
    cont = nil
    ary = [1,2,3]
    begin
      ary.repeated_combination(2) {
        callcc {|k| cont = k} unless cont
      }
    rescue => e
    end
    n -= 1
    cont.call if 0 < n
    assert_instance_of(RuntimeError, e)
    assert_match(/reentered/, e.message)
  end
    
        bug6323 = '[ruby-core:44447]'
    t = t2000.getlocal('+00:36')
    assert_equal('      +036', t.strftime('%_10z'), bug6323)
    assert_equal('+000000036', t.strftime('%10z'), bug6323)
    assert_equal('     +0:36', t.strftime('%_10:z'), bug6323)
    assert_equal('+000000:36', t.strftime('%10:z'), bug6323)
    assert_equal('  +0:36:00', t.strftime('%_10::z'), bug6323)
    assert_equal('+000:36:00', t.strftime('%10::z'), bug6323)
    assert_equal('+000000:36', t.strftime('%10:::z'))
    t = t2000.getlocal('-00:55')
    assert_equal('      -055', t.strftime('%_10z'), bug6323)
    assert_equal('-000000055', t.strftime('%10z'), bug6323)
    assert_equal('     -0:55', t.strftime('%_10:z'), bug6323)
    assert_equal('-000000:55', t.strftime('%10:z'), bug6323)
    assert_equal('  -0:55:00', t.strftime('%_10::z'), bug6323)
    assert_equal('-000:55:00', t.strftime('%10::z'), bug6323)
    assert_equal('-000000:55', t.strftime('%10:::z'))
  end
    
      it 'returns an empty string and does not decode any bytes when the count modifier is zero' do
    'abc'.unpack(unpack_format(0)+unpack_format).should == ['', 'a']
  end
    
      class SubclassX < Struct
  end
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
            rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
      if File.exist?('Capfile')
    warn '[skip] Capfile already exists'
  else
    FileUtils.cp(capfile, 'Capfile')
    puts I18n.t(:written_file, scope: :capistrano, file: 'Capfile')
  end
    
      describe 'role_properties()' do
    before do
      dsl.role :redis, %w[example1.com example2.com], redis: { port: 6379, type: :slave }
      dsl.server 'example1.com', roles: %w{web}, active: true, web: { port: 80 }
      dsl.server 'example2.com', roles: %w{web redis}, web: { port: 81 }, redis: { type: :master }
      dsl.server 'example3.com', roles: %w{app}, primary: true
    end