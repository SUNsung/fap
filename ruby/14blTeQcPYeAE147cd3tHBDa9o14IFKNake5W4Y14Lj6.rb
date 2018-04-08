
        
          def test_realpath_taintedness
    Dir.mktmpdir('rubytest-realpath') {|tmpdir|
      dir = File.realpath(tmpdir).untaint
      File.write(File.join(dir, base = 'test.file'), '')
      base.taint
      dir.taint
      assert_predicate(File.realpath(base, dir), :tainted?)
      base.untaint
      dir.taint
      assert_predicate(File.realpath(base, dir), :tainted?)
      base.taint
      dir.untaint
      assert_predicate(File.realpath(base, dir), :tainted?)
      base.untaint
      dir.untaint
      assert_not_predicate(File.realpath(base, dir), :tainted?)
      assert_predicate(Dir.chdir(dir) {File.realpath(base)}, :tainted?)
    }
  end
    
      it 'ignores NULL bytes between directives' do
    array = 'abcdefghabghefcd'.unpack(unpack_format('\000', 2))
    array.should == [7523094288207667809, 7233738012216484449]
  end
    
      def self.critical_is_reset
    # Create another thread to verify that it can call Thread.critical=
    t = Thread.new do
      initial_critical = Thread.critical
      Thread.critical = true
      Thread.critical = false
      initial_critical == false && Thread.critical == false
    end
    v = t.value
    t.join
    v
  end
    
      with_feature :fiber do
    it 'kills the entire thread when a fiber is active' do
      t = Thread.new do
        Fiber.new do
          sleep
        end.resume
        ScratchPad.record :fiber_resumed
      end
      Thread.pass while t.status and t.status != 'sleep'
      t.send(@method)
      t.join
      ScratchPad.recorded.should == nil
    end
  end
    
        def self.names_for(klass)
      instance.names_for(klass)
    end
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end
    
        def define
      define_flush_errors
      define_getters
      define_setter
      define_query
      register_new_attachment
      add_active_record_callbacks
      add_paperclip_callbacks
      add_required_validations
    end
    
        # Returns the id of the instance in a split path form. e.g. returns
    # 000/001/234 for an id of 1234.
    def id_partition attachment, style_name
      case id = attachment.instance.id
      when Integer
        ('%09d'.freeze % id).scan(/\d{3}/).join('/'.freeze)
      when String
        id.scan(/.{3}/).first(3).join('/'.freeze)
      else
        nil
      end
    end
    
            def rejecting *types
          @rejected_types = types.flatten
          self
        end
    
            def in range
          @low, @high = range.first, range.last
          self
        end
    
    
    {
    {  # Returns hash with styles for all classes using Paperclip.
  # Unfortunately current version does not work with lambda styles:(
  #   {
  #     :User => {:avatar => [:small, :big]},
  #     :Book => {
  #       :cover => [:thumb, :croppable]},
  #       :sample => [:thumb, :big]},
  #     }
  #   }
  def self.current_attachments_styles
    Hash.new.tap do |current_styles|
      Paperclip::AttachmentRegistry.each_definition do |klass, attachment_name, attachment_attributes|
        # TODO: is it even possible to take into account Procs?
        next if attachment_attributes[:styles].kind_of?(Proc)
        attachment_attributes[:styles].try(:keys).try(:each) do |style_name|
          klass_sym = klass.to_s.to_sym
          current_styles[klass_sym] ||= Hash.new
          current_styles[klass_sym][attachment_name.to_sym] ||= Array.new
          current_styles[klass_sym][attachment_name.to_sym] << style_name.to_sym
          current_styles[klass_sym][attachment_name.to_sym].map!(&:to_s).sort!.map!(&:to_sym).uniq!
        end
      end
    end
  end
  private_class_method :current_attachments_styles
    
        def processor(name) #:nodoc:
      @known_processors ||= {}
      if @known_processors[name.to_s]
        @known_processors[name.to_s]
      else
        name = name.to_s.camelize
        load_processor(name) unless Paperclip.const_defined?(name)
        processor = Paperclip.const_get(name)
        @known_processors[name.to_s] = processor
      end
    end
    
        rake_tasks { load 'tasks/paperclip.rake' }
  end
    
              def find_plugins_gem_specs
            @specs ||= ::Gem::Specification.find_all.select{|spec| logstash_plugin_gem_spec?(spec)}
          end
    
          def snapshot
        agent.metric.collector.snapshot_metric
      end
    
    module LogStash module Config module CpuCoreStrategy