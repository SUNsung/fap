
        
            # Create a new Document.
    #
    # path - the path to the file
    # relations - a hash with keys :site and :collection, the values of which
    #             are the Jekyll::Site and Jekyll::Collection to which this
    #             Document belong.
    #
    # Returns nothing.
    def initialize(path, relations = {})
      @site = relations[:site]
      @path = path
      @extname = File.extname(path)
      @collection = relations[:collection]
      @has_yaml_header = nil
    
      def test_freeze
    m = Module.new do
      def self.baz; end
      def bar; end
    end
    m.freeze
    assert_raise(FrozenError) do
      m.module_eval do
        def foo; end
      end
    end
    assert_raise(FrozenError) do
      m.__send__ :private, :bar
    end
    assert_raise(FrozenError) do
      m.private_class_method :baz
    end
  end
    
      def test_shared_eval
    bug7671 = '[ruby-core:51296]'
    vs = (1..9).to_a
    eval('vs.select {|n| if n==2..n==16 then 1 end}')
    v = eval('vs.select {|n| if n==3..n==6 then 1 end}')
    assert_equal([*3..6], v, bug7671)
  end
    
      def caller_lineno(*)
    caller_locations(1, 1)[0].lineno
  end
end

    
    describe 'CApiAllocTypedSpecs (a class with an alloc func defined)' do
  it 'calls the alloc func' do
    @s = CApiAllocTypedSpecs.new
    @s.typed_wrapped_data.should == 42 # not defined in initialize
  end
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
    
        ret = set.collect! { |i|
      case i
      when Numeric
        i * 2
      when String
        i.upcase
      else
        nil
      end
    }
    
      it 'decodes two doubles for two format characters' do
    '333333\x07@ffffff\xf6?'.unpack(unpack_format(nil, 2)).should == [2.9, 1.4]
  end
    
      it 'ignores spaces between directives' do
    array = 'abcdefghabghefcd'.unpack(unpack_format(' ', 2))
    array.should == [7523094288207667809, 7233738012216484449]
  end
end
    
          def call
        title('Gems')
        table(all_gem_names) do |gem, row|
          row.yellow if update_available?(gem)
          row << gem
          row << installed_gem_version(gem)
          row << '(update available)' if update_available?(gem)
        end
      end
    
            it 'returns all servers' do
          expect(subject.map(&:hostname)).to eq %w{example1.com example2.com example3.com example4.com example5.com}
        end
      end
    
      it 'displays documentation URL as help banner' do
    expect(help_output.lines.first).to match(/capistranorb.com/)
  end
    
    class SinatraStaticServer < Sinatra::Base
    
    Liquid::Template.register_tag('config_tag', ConfigTag)
    
    require './plugins/pygments_code'
require './plugins/raw'
require 'pathname'
    
      desc 'Build all spree gems'
  task :build do
    pkgdir = File.expand_path('../pkg', __FILE__)
    FileUtils.mkdir_p pkgdir
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end