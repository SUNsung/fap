
        
                if value.present?
          # We refresh the expiration time so frequently used keys stick
          # around, removing the need for querying the database as much as
          # possible.
          #
          # A key may be empty when we looked up a GitHub user (for example) but
          # did not find a matching GitLab user. In that case we _don't_ want to
          # refresh the TTL so we automatically pick up the right data when said
          # user were to register themselves on the GitLab instance.
          Redis::Cache.with { |redis| redis.expire(key, timeout) }
        end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
              hosts
        end
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                # Don't set the value if it is the unset value, either.
                value = obj.instance_variable_get(key)
                result.instance_variable_set(key, value) if value != UNSET_VALUE
              end
            end
          end
    
              nil
        end
    
            # This method is called if the underlying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end
    
    class FormulaPin
  def initialize(f)
    @f = f
  end
    
        it { is_expected.to have_valid_bash_syntax }
  end
    
          def link_to_clone(resource, options = {})
        options[:data] = { action: 'clone', 'original-title': Spree.t(:clone) }
        options[:class] = 'btn btn-primary btn-sm with-tip'
        options[:method] = :post
        options[:icon] = :clone
        button_link_to '', clone_object_url(resource), options
      end
    
        it 'is able to search orders using only completed at input' do
      fill_in 'q_created_at_gt', with: Date.current
      click_on 'Filter Results'
    
              def ensure_order
            raise ActiveRecord::RecordNotFound if spree_current_order.nil?
          end
    
            def index
          @products = if params[:ids]
                        product_scope.where(id: params[:ids].split(',').flatten)
                      else
                        product_scope.ransack(params[:q]).result
                      end
    
        def cache(gist, file, data)
      cache_file = get_cache_file_for gist, file
      File.open(cache_file, 'w') do |io|
        io.write data
      end
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        # This allows packages to define flags for the fpm command line
    def option(flag, param, help, options={}, &block)
      @options ||= []
      if !flag.is_a?(Array)
        flag = [flag]
      end
    
        open(temporary_target_path, 'wb') do |target_file|
    
        pkg_origin = attributes[:freebsd_origin]
    if pkg_origin == 'fpm/<name>'  # fill in default
      pkg_origin = 'fpm/#{name}'
    end
    
      option '--data-dir', 'DATA_DIR',
    'Specify php dir relative to prefix if differs from pear default (pear/data)'
    
    class FPM::Package::Puppet < FPM::Package
  def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -m}.chomp
    end
    return @architecture
  end # def architecture
    
        if !attributes[:no_auto_depends?] and attributes[:python_dependencies?]
      metadata['dependencies'].each do |dep|
        dep_re = /^([^<>!= ]+)\s*(?:([~<>!=]{1,2})\s*(.*))?$/
        match = dep_re.match(dep)
        if match.nil?
          logger.error('Unable to parse dependency', :dependency => dep)
          raise FPM::InvalidPackageConfiguration, 'Invalid dependency '#{dep}''
        end
        name, cmp, version = match.captures
    
        unless safesystem(*args)
      raise 'Command failed while creating payload tar: #{args}'
    end
    payload_tar
  end
    
        desc 'Package #{@name}' unless ::Rake.application.last_description
    
      extend ActiveSupport::Concern
    
      def destroy
    @ip_address.destroy
    redirect_to_with_json [:edit, @ip_pool]
  end
    
      private
    
      def index
    @track_domains = @server.track_domains.order(:name).to_a
  end