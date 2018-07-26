
        
            keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
          if path.symlink? || path.directory?
        next
      elsif path.extname == '.la'
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if path.mach_o_executable? || path.text_executable?
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end

    
    module Homebrew
  def doctor
    checks = Diagnostic::Checks.new
    
        args = dirs + %w[-type f (]
    args.concat UNBREWED_EXCLUDE_FILES.flat_map { |f| %W[! -name #{f}] }
    args.concat UNBREWED_EXCLUDE_PATHS.flat_map { |d| %W[! -path #{d}] }
    args.concat %w[)]
    
              subtree, file = File.split(object['path'])
    
          next unless dst.extname == '.rb'
      next unless paths.any? { |p| tap.formula_file?(p) }
    
          it 'get HG build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
            get_build_number_repository
        end').runner.execute(:test)
    
        validate :validate_evernote_options
    
      included do
    include Oauthable
    
      def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
          attr_reader :scope_name, :resource
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def guests
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.guests)
            end
          end
        end
    
          # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
    # Use this to fill in an entire form with data from a table. Example:
#
#   When I fill in the following:
#     | Account Number | 5002       |
#     | Expiry date    | 2009-11-01 |
#     | Note           | Nice guy   |
#     | Wants Email?   |            |
#
# TODO: Add support for checkbox, select og option
# based on naming conventions.
#
When /^(?:|I )fill in the following:$/ do |fields|
  fields.rows_hash.each do |name, value|
    When %{I fill in '#{name}' with '#{value}'}
  end
end
    
            def higher_than_low?
          @low.nil? || passes_validation_with_size(@low + 1)
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
    
          if defined?(ActiveRecord)
        Paperclip.options[:logger] = ActiveRecord::Base.logger
        ActiveRecord::Base.send(:include, Paperclip::Glue)
      end
    end
  end
end
