
        
          def find_internal_commands(directory)
    directory.children.reduce([]) do |cmds, f|
      cmds << f.basename.to_s.sub(/\.(?:rb|sh)$/, '') if f.file?
      cmds
    end
  end
end

    
    module Homebrew
  SEARCH_ERROR_QUEUE = Queue.new
    
          case status
      when 'A', 'D'
        @report[status.to_sym] << tap.formula_file_to_name(src)
      when 'M'
        begin
          formula = Formulary.factory(tap.path/src)
          new_version = formula.pkg_version
          old_version = FormulaVersions.new(formula).formula_at_revision(@initial_revision, &:pkg_version)
          next if new_version == old_version
        rescue Exception => e
          onoe e if ARGV.homebrew_developer?
        end
        @report[:M] << tap.formula_file_to_name(src)
      when /^R\d{0,3}/
        @report[:D] << tap.formula_file_to_name(src) if tap.formula_file?(src)
        @report[:A] << tap.formula_file_to_name(dst) if tap.formula_file?(dst)
      end
    end
    
        def add_entry(entry)
      if @index.add?(entry.as_json.to_s)
        @entries << entry.dup
        @types[entry.type].count += 1 if entry.type
      end
    end
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def merge!(hash)
      return super unless hash.is_a? Hash
      hash.assert_valid_keys URI::Generic::COMPONENT
      hash.each_pair do |key, value|
        send '#{key}=', value
      end
      self
    end
    
      it 'does copy the backtrace' do
    begin
      # Explicitly raise so a backtrace is associated with the exception.
      # It's tempting to call `set_backtrace` instead, but that complicates
      # the test because it might affect other state (e.g., instance variables)
      # on some implementations.
      raise ExceptionSpecs::InitializeException.new('my exception')
    rescue => e
      @obj = e
    end
    
          rm_r filename
    end
  end
    
      it 'writes binary data if no encoding is given' do
    IO.write(@filename, 'Hëllö'.encode('ISO-8859-1'))
    xEB = [235].pack('C*')
    xF6 = [246].pack('C*')
    File.binread(@filename).should == ('H' + xEB + 'll' + xF6).force_encoding(Encoding::ASCII_8BIT)
  end
    
      it 'returns subclass instances when called on a subclass' do
    StringSpecs::MyString.new('hello').capitalize.should be_an_instance_of(StringSpecs::MyString)
    StringSpecs::MyString.new('Hello').capitalize.should be_an_instance_of(StringSpecs::MyString)
  end
end
    
    describe 'Invoking a method' do
  describe 'with required args after the rest arguments' do
    it 'binds the required arguments first' do
      specs.fooM0RQ1(1).should == [[], 1]
      specs.fooM0RQ1(1,2).should == [[1], 2]
      specs.fooM0RQ1(1,2,3).should == [[1,2], 3]
    
        it 'calls #inherited on the superclass' do
      CApiClassSpecs::Super.should_receive(:inherited)
      @s.rb_define_class_under(CApiClassSpecs, 'ClassUnder4', CApiClassSpecs::Super)
      CApiClassSpecs.send(:remove_const, :ClassUnder4)
    end
    
        it 'enqueues a ReceivePrivate job' do
      expect(Workers::ReceivePrivate).to receive(:perform_async).with(alice.id, data, true)
    
        def register(klass, attachment_name, attachment_options)
      @attachments ||= {}
      @attachments[klass] ||= {}
      @attachments[klass][attachment_name] = attachment_options
    end
    
            raise LoadError, 'Could not find the '#{name}' processor in any of these paths: #{directories.join(', ')}' unless required.any?
      end
    end