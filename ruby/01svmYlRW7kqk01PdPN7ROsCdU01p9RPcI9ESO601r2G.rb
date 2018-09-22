
        
            describe 'App Status' do
      it 'parses readyForSale' do
        version = app.live_version
    
        describe '#handle_itc_response' do
      it 'raises an exception if something goes wrong' do
        data = JSON.parse(TunesStubbing.itc_read_fixture_file('update_app_version_failed.json'))['data']
        expect do
          subject.handle_itc_response(data)
        end.to raise_error('[German]: The App Name you entered has already been used. [English]: The App Name you entered has already been used. You must provide an address line. There are errors on the page and for 2 of your localizations.')
      end
    
        #####################################################
    # @!group Helpers
    #####################################################
    
          def self.fetch_plugins(cache_path)
        page = 1
        plugins = []
        loop do
          url = 'https://rubygems.org/api/v1/search.json?query=fastlane-plugin-&page=#{page}'
          puts('RubyGems API Request: #{url}')
          results = JSON.parse(open(url).read)
          break if results.count == 0
    
      %w(/maxcdn /maxcdn/).each do |path|
    class_eval <<-CODE, __FILE__, __LINE__ + 1
      get '#{path}' do
        410
      end
    CODE
  end
    
        private
    
        if @filter.save
      redirect_to filters_path
    else
      render action: :new
    end
  end
    
      def scope_for_collection
    case params[:id]
    when 'featured'
      @account.statuses.permitted_for(@account, signed_request_account).tap do |scope|
        scope.merge!(@account.pinned_statuses)
      end
    else
      raise ActiveRecord::NotFound
    end
  end
    
        def index
      authorize :account, :index?
      @accounts = filtered_accounts.page(params[:page])
    end
    
        def form_status_batch_params
      params.require(:form_status_batch).permit(status_ids: [])
    end
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
    class Api::PushController < Api::BaseController
  include SignatureVerification
    
    class Api::SubscriptionsController < Api::BaseController
  before_action :set_account
  respond_to :txt
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'
    
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
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
      # Checks for excerpts (helpful for template conditionals)
  def has_excerpt(input)
    input =~ /<!--\s*more\s*-->/i ? true : false
  end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
          def order_token
        request.headers['X-Spree-Order-Token'] || params[:order_token]
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
    
            def line_items_attributes
          { line_items_attributes: {
              id: params[:id],
              quantity: params[:line_item][:quantity],
              options: line_item_params[:options] || {}
          } }
        end