
        
                  content = if block_given?
            @template_object.capture(builder, &block)
          elsif @content.present?
            @content.to_s
          else
            render_component(builder)
          end
    
        # Main render entry point shared by Action View and Action Controller.
    def render(context, options)
      if options.key?(:partial)
        render_partial(context, options)
      else
        render_template(context, options)
      end
    end
    
    require 'benchmark/ips'
require 'jekyll'
require 'json'
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
    Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
        option_names.any? do |name|
      if option_defined? 'with-#{name}'
        include? 'with-#{name}'
      elsif option_defined? 'without-#{name}'
        !include? 'without-#{name}'
      else
        false
      end
    end
  end
    
          plist_filename = if f.plist
        f.plist_path.basename
      else
        File.basename Dir['#{keg}/*.plist'].first
      end
      plist_link = '#{destination}/#{plist_filename}'
      plist_domain = f.plist_path.basename('.plist')
      destination_path = Pathname.new File.expand_path destination
      plist_path = destination_path/plist_filename
    
      def head
    Homebrew.git_head || '(none)'
  end
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
            def new; end
    
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
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
            def create
          authorize! :create, Store
          @store = Store.new(store_params)
          @store.code = params[:store][:code]
          if @store.save
            respond_with(@store, status: 201, default_template: :show)
          else
            invalid_resource!(@store)
          end
        end
    
            def products
          # Returns the products sorted by their position with the classification
          # Products#index does not do the sorting.
          taxon = Spree::Taxon.find(params[:id])
          @products = taxon.products.ransack(params[:q]).result
          @products = @products.page(params[:page]).per(params[:per_page] || 500)
          render 'spree/api/v1/products/index'
        end
    
            def destroy
          authorize! :destroy, user
          user.destroy
          respond_with(user, status: 204)
        end
    
      steps %{
    And I turn off class caching
    And I write to 'Gemfile' with:
      '''
      source 'http://rubygems.org'
      gem 'rails', '#{framework_version}'
      gem 'sqlite3', :platform => [:ruby, :rbx]
      gem 'activerecord-jdbcsqlite3-adapter', :platform => :jruby
      gem 'jruby-openssl', :platform => :jruby
      gem 'capybara'
      gem 'gherkin'
      gem 'aws-sdk-s3'
      gem 'racc', :platform => :rbx
      gem 'rubysl', :platform => :rbx
      '''
    And I remove turbolinks
    And I comment out lines that contain 'action_mailer' in 'config/environments/*.rb'
    And I empty the application.js file
    And I configure the application to use 'paperclip' from this project
  }
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
          [ scale_geometry, crop_geometry ]
    end