
        
                # This returns all the config classes for the various pushes.
        #
        # @return [Registry]
        def push_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:push])
            end
          end
        end
    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
      def test_exit_status
    Open3.popen3(RUBY, '-e', 'exit true') {|i,o,e,t|
      assert_equal(true, t.value.success?)
    }
    Open3.popen3(RUBY, '-e', 'exit false') {|i,o,e,t|
      assert_equal(false, t.value.success?)
    }
  end
    
        klass = Class.new do
      const_set(:X, 123)
    end
    assert_equal(false, klass.class_eval { Module.constants }.include?(:X))
    
      describe 'with -n and a Fixnum range' do
    before :each do
      @script = '-W0 -ne 'print if %s' #{fixture(__FILE__, 'conditional_range.txt')}'
    end
    
      it 'evaluates elsif-body in containing scope' do
    a = 123
    if false
      b = a+1
    elsif false
      b = a+2
    elsif true
      b = a+3
    else
      b = a+4
    end
    b.should == 126
  end
end

    
      def test_memsize
    # Time objects are common in some code, try to keep them small
    skip 'Time object size test' if /^(?:i.?86|x86_64)-linux/ !~ RUBY_PLATFORM
    require 'objspace'
    t = Time.at(0)
    size = GC::INTERNAL_CONSTANTS[:RVALUE_SIZE]
    case size
    when 20 then expect = 50
    when 40 then expect = 86
    else
      flunk 'Unsupported RVALUE_SIZE=#{size}, update test_memsize'
    end
    assert_equal expect, ObjectSpace.memsize_of(t)
  rescue LoadError => e
    skip 'failed to load objspace: #{e.message}'
  end
end

    
    describe :string_unpack_16bit_le, shared: true do
  it 'decodes one short for a single format character' do
    'ab'.unpack(unpack_format).should == [25185]
  end
    
    describe :string_unpack_unicode, shared: true do
  it 'decodes Unicode codepoints as ASCII values' do
    [ ['\x00',      [0]],
      ['\x01',      [1]],
      ['\x08',      [8]],
      ['\x0f',      [15]],
      ['\x18',      [24]],
      ['\x1f',      [31]],
      ['\x7f',      [127]],
      ['\xc2\x80',  [128]],
      ['\xc2\x81',  [129]],
      ['\xc3\xbf',  [255]]
    ].should be_computed_by(:unpack, 'U')
  end
    
      class SubclassX < Struct
  end
    
          # Prints a table for a given array of records. For each record, the block
      # is yielded two arguments: the record and a Row object. To print values
      # for that record, add values using `row << 'some value'`. A row can
      # optionally be highlighted in yellow using `row.yellow`.
      def table(records, &block)
        return if records.empty?
        rows = collect_rows(records, &block)
        col_widths = calculate_column_widths(rows)
    
        def after(task, post_task, *args, &block)
      Rake::Task.define_task(post_task, *args, &block) if block_given?
      task = Rake::Task[task]
      task.enhance do
        post = Rake.application.lookup(post_task, task.scope)
        raise ArgumentError, 'Task #{post_task.inspect} not found' unless post
        post.invoke
      end
    end
    
      deploy_rb = File.expand_path('../../templates/deploy.rb.erb', __FILE__)
  stage_rb = File.expand_path('../../templates/stage.rb.erb', __FILE__)
  capfile = File.expand_path('../../templates/Capfile', __FILE__)
    
        def blank_name?
      @filepath.nil? || @filepath.empty?
    end
    
          @klass.send :define_method, @name do |*args|
        ivar = '@attachment_#{name}'
        attachment = instance_variable_get(ivar)
    
            def rejected_types_rejected?
          @missing_rejected_types ||= @rejected_types.select { |type| type_allowed?(type) }
          @missing_rejected_types.none?
        end
      end
    end
  end
end
