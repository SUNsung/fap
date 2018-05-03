
        
            def initialize
      @attributes = {}
    end
    
      class BareEmptyTest < ActiveSupport::TestCase
    test 'response body is nil' do
      controller = BareEmptyController.new
      controller.set_request!(ActionDispatch::Request.empty)
      controller.set_response!(BareController.make_response!(controller.request))
      controller.index
      assert_nil controller.response_body
    end
  end
    
        def call(env)
      @stack.call(env)
    end
  end
    
      def use_cache
    mail_with_defaults do |format|
      format.html { render(inline: '<% cache(:foo) do %>Greetings from a cache helper block<% end %>') }
    end
  end
    
      # True if a {Formula} is being built in 32-bit/x86 mode.
  # This is needed for some use-cases though we prefer to build Universal
  # when a 32-bit version is needed.
  def build_32_bit?
    include?('32-bit') && option_defined?('32-bit')
  end
    
      def core_tap_origin
    CoreTap.instance.remote || '(none)'
  end
    
          if tap.core_tap?
        new_full_name = new_name
      else
        new_full_name = '#{tap}/#{new_name}'
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
    
        validate :validate_evernote_options
    
      module SortableTableHelper
    # :call-seq:
    #   sortable_column(attribute, default_direction = 'desc', name: attribute.humanize)
    def sortable_column(attribute, default_direction = nil, options = nil)
      if options.nil? && (options = Hash.try_convert(default_direction))
        default_direction = nil
      end
      default_direction ||= 'desc'
      options ||= {}
      name = options[:name] || attribute.humanize
      selected = @table_sort_info[:attribute].to_s == attribute
      if selected
        direction = @table_sort_info[:direction]
        new_direction = direction.to_s == 'desc' ? 'asc' : 'desc'
        classes = 'selected #{direction}'
      else
        classes = ''
        new_direction = default_direction
      end
      link_to(name, url_for(sort: '#{attribute}.#{new_direction}'), class: classes)
    end
  end
end

    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
      def destroy
    @job = Delayed::Job.find(params[:id])
    
      # Checks whether it's a devise mapped resource or not.
  def assert_is_devise_resource! #:nodoc:
    unknown_action! <<-MESSAGE unless devise_mapping
Could not find devise mapping for path #{request.fullpath.inspect}.
This may happen for two reasons:
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
        def name=(value)
      @name = value.try :strip
    end
    
              node.css('.method').each do |n|
            next unless n.at_css('dt[id]')
            name = n.at_css('.descname').content
            name = '#{class_name}::#{name}()'
            id = n.at_css('dt[id]')['id']
            entries << [name, id]
          end
        end
    
    EOS
end
    
    With optional '-t <bundle-id>', silently test if a given app
is running, exiting with an error code if not.
    
        @save_to.each { |_, v| FileUtils.mkdir_p(v) }
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
            def capture_with_block!
          @captured_by_block = true
        end
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
        def value
      elements[4]
    end
  end