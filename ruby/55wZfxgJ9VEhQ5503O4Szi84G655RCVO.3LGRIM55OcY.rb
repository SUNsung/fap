
        
          def test_inspect_limited_select_instance
    assert_equal %(#<Topic id: 1>), Topic.all.merge!(select: 'id', where: 'id = 1').first.inspect
    assert_equal %(#<Topic id: 1, title: 'The First Topic'>), Topic.all.merge!(select: 'id, title', where: 'id = 1').first.inspect
  end
    
    require 'active_support'
require 'active_support/core_ext/object/blank'
require 'minitest/autorun'
    
      def test_throw_away_typing
    d = Developer.new('name' => 'David', 'salary' => '100,000')
    assert_not_predicate d, :valid?
    assert_equal 100, d.salary
    assert_equal '100,000', d.salary_before_type_cast
  end
    
        before_action :ensure_configured
    
        config.action_mailbox.queues = ActiveSupport::InheritableOptions.new \
      incineration: :action_mailbox_incineration, routing: :action_mailbox_routing
    
      spec.files         = %w[
    LICENSE.txt
    README.md
    ext/etc/constdefs.h
    ext/etc/etc.c
    ext/etc/extconf.rb
    ext/etc/mkconstants.rb
    stub/etc.rb
    test/etc/test_etc.rb
  ]
  spec.bindir        = 'exe'
  spec.require_paths = ['lib']
  spec.extensions    = %w{ext/etc/extconf.rb}
    
        def prepare_format
      @column_separator = @options[:column_separator].to_s.encode(@encoding)
      row_separator = @options[:row_separator]
      if row_separator == :auto
        @row_separator = $INPUT_RECORD_SEPARATOR.encode(@encoding)
      else
        @row_separator = row_separator.to_s.encode(@encoding)
      end
      @quote_character = @options[:quote_character]
      @force_quotes = @options[:force_quotes]
      unless @force_quotes
        @quotable_pattern =
          Regexp.new('[\r\n'.encode(@encoding) +
                     Regexp.escape(@column_separator) +
                     Regexp.escape(@quote_character.encode(@encoding)) +
                     ']'.encode(@encoding))
      end
      @quote_empty = @options.fetch(:quote_empty, true)
    end
    
    require 'racc/raccs'
    
          it 'does not decrement pos' do
        @gz.ungetc ''
        @gz.pos.should == 10
      end
    
      before do
    @zeros    = Zlib::Deflate.deflate('0' * 100_000)
    @inflator = Zlib::Inflate.new
    @chunks   = []
    
    class SessionsController < Devise::SessionsController
  # rubocop:disable Rails/LexicallyScopedActionFilter
  before_action :authenticate_with_2fa, only: :create
  after_action :reset_authentication_token, only: :create
  before_action :reset_authentication_token, only: :destroy
  # rubocop:enable Rails/LexicallyScopedActionFilter
    
        @posts_per_day = Post.where('created_at >= ?', Date.today - 21.days).group('DATE(created_at)').order('DATE(created_at) ASC').count
    @most_posts_within = @posts_per_day.values.max.to_f
    
        if @aspect.update_attributes!(aspect_params)
      flash[:notice] = I18n.t 'aspects.update.success', :name => @aspect.name
    else
      flash[:error] = I18n.t 'aspects.update.failure', :name => @aspect.name
    end
    render :json => { :id => @aspect.id, :name => @aspect.name }
  end
    
        redirect_to stream_path
  end
end

    
      def create
    conversation = Conversation.find(params[:conversation_id])
    
      def default_serializer_options
    {
      context: self,
      root:    false
    }
  end
    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'leaves TempFiles untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['file'][:filename] + '\n' + \
                                                 request.params['file'][:tempfile].read + '\n' + \
                                                 request.params['other']]]
      end
    
        context 'for a class definition' do
      let(:src) { 'class C < Super; def method; end end' }
    
          class << self
        attr_reader :processed_source
    
          def within_column_limit?(element, max, line)
        element && element.loc.column < max && element.loc.line == line
      end
    
              check(node, node.arguments, 'parameter of %<article>s method call',
                node.last_argument.source_range.end_pos,
                node.source_range.end_pos)
        end
        alias on_csend on_send
    
      it 'registers offense when guard clause is before `begin`' do
    expect_offense(<<~RUBY)
      def foo
        return another_object if something_different?
        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Add empty line after guard clause.
        begin
          bar
        rescue SomeException
          baz
        end
      end
    RUBY
  end
    
          # The name of the dispatched method as a symbol.
      #
      # @return [Symbol] the name of the dispatched method
      def method_name
        send_node.method_name
      end
    
        context 'when create fails' do
      let(:invalid_params) { { description: nil } } # Force model validation error
    
      it 'renders a user index if there is a user with the username successfully' do
    expect(get: '/#{user.username}').to route_to(
      controller: 'stories',
      action: 'index',
      username: user.username,
    )
  end
    
        def set(*args)
      options = args.extract_options!
      options.each do |name, value|
        set_preference name, value
      end
    
                shipment.save!
    
              scope = scope.not_deleted unless params[:show_deleted]
          scope = scope.not_discontinued unless params[:show_discontinued]
        else
          scope = Product.accessible_by(current_ability, :show).active.includes(*product_includes)
        end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def fire
          inventory_unit.send('#{@event}!') if @event
        end
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
            def update
          if @property
            authorize! :update, @property
            @property.update(property_params)
            respond_with(@property, status: 200, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end