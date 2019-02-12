
        
                  def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
              super(object_name, method_name, template_object, options)
        end
    
              def field_type
            self.class.field_type
          end
      end
    end
  end
end

    
          def to_str
        ERB::Util.h(@string)
      end
    
    describe 'Kernel.srand' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:srand)
  end
    
    describe 'Kernel#system' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:system)
  end
    
        after :each do
      @tmp_file.close
      rm_r @tmp_file
    end
    
      context 'collections' do
    context 'without include param' do
      before { get '/api/v2/storefront/products' }
    
          context 'without coupon code' do
        context 'does not apply the coupon code' do
          let!(:coupon_code) { '' }
    
          context 'with line_items and email' do
        before { execute }
    
              def serialize_resource(resource)
            resource_serializer.new(
              resource,
              include: resource_includes,
              sparse_fields: sparse_fields
            ).serializable_hash
          end
    
          resources :inventory_units, only: [:show, :update]
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
      end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
    __END__
    
          private
    
          def deliver(msg)
        if msg.respond_to?(:deliver_now)
          # Rails 4.2/5.0
          msg.deliver_now
        else
          # Rails 3.2/4.0/4.1
          msg.deliver
        end
      end
    end
    
          def initialize_copy(copy)
        copy.instance_variable_set(:@entries, entries.dup)
      end
    
        def erb(content, options = {})
      if content.kind_of? Symbol
        unless respond_to?(:'_erb_#{content}')
          src = ERB.new(File.read('#{Web.settings.views}/#{content}.erb')).src
          WebAction.class_eval('def _erb_#{content}\n#{src}\n end')
        end
      end
    
        def delete(path, &block)
      route(DELETE, path, &block)
    end
    
    # Create two output packages!
output_packages = []
output_packages << pleaserun.convert(FPM::Package::RPM)
output_packages << pleaserun.convert(FPM::Package::Deb)
    
    # TODO(sissel): Add dependency checking support.
# IIRC this has to be done as a 'checkinstall' step.
class FPM::Package::Solaris < FPM::Package