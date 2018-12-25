
        
            if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
      # Get the mailer class from the mailer reference object.
  def self.mailer
    @@mailer_ref.get
  end
    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
            context 'the exponent is greater than or equal to the precision (6 by default)' do
          it 'converts a floating point number using exponential form' do
            format('%#{f}', 1234567).should == '1.23457#{exp}+06'
            format('%#{f}', 1234567890123).should == '1.23457#{exp}+12'
            format('%#{f}', -1234567).should == '-1.23457#{exp}+06'
          end
        end
    
      aspect_id = @me.aspects.length == 1 ? @me.aspects.first.id : @me.aspects.where(:name => 'Besties').first.id
  contacts.each do |contact|
    aspect_memberships << AspectMembership.new(:contact_id => contact.id, :aspect_id => aspect_id)
  end
  AspectMembership.import(aspect_memberships)
end
    
        it 'does redirect when invitations are closed now' do
      code = InvitationCode.create(user: bob)
      AppConfig.settings.invitations.open = false
    
              def set_local_#{name}(name, value)
            @#{name}s ||= {}
            @#{name}s[name.tr('_', '-')] = value
          end
    
        # Tells optparse how to parse the arguments
    # available for all executables.
    #
    # This is meant to be overridden by subclasses
    # so they can add their own options.
    #
    # @param opts [OptionParser]
    def set_opts(opts)
      Sass::Util.abstract(this)
    end
    
      namespace :release do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Release #{gem} as a package'
      task gem => 'package:#{gem}' do
        sh <<-SH
          gem install #{package(gem, '.gem')} --local &&
          gem push #{package(gem, '.gem')}
        SH
      end
    end
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''