
        
        module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
      # True if a {Formula} is being built in 32-bit/x86 mode.
  # This is needed for some use-cases though we prefer to build Universal
  # when a 32-bit version is needed.
  def build_32_bit?
    include?('32-bit') && option_defined?('32-bit')
  end
    
            begin
          f = Formulary.from_rack(HOMEBREW_CELLAR/name)
        rescue FormulaUnavailableError, TapFormulaAmbiguityError, TapFormulaWithOldnameAmbiguityError
          next
        end
    
          # Confirm a user by setting it's confirmed_at to actual time. If the user
      # is already confirmed, add an error to email field. If the user is invalid
      # add errors
      def confirm(args={})
        pending_any_confirmation do
          if confirmation_period_expired?
            self.errors.add(:email, :confirmation_period_expired,
              period: Devise::TimeInflector.time_ago_in_words(self.class.confirm_within.ago))
            return false
          end
    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
        #
    # @param ips [String] IP range(s)
    # @return [true] if actions on ips are allowed.
    # @return [false] if actions are not allowed on ips.
    def allow_actions_on?(ips)
      return true unless limit_to_network
      return true unless boundary
      return true if boundary.empty?
      boundaries = Shellwords.split(boundary)
      return true if boundaries.empty? # It's okay if there is no boundary range after all
      given_range = Rex::Socket::RangeWalker.new(ips)
      return false unless given_range # Can't do things to nonexistant IPs
      allowed = false
      boundaries.each do |boundary_range|
        ok_range = Rex::Socket::RangeWalker.new(boundary)
        allowed  = true if ok_range.include_range? given_range
      end
      return allowed
    end
    
    module Metasploit
  module Framework
    class Application < Rails::Application
      include Metasploit::Framework::CommonEngine
    
                when :user
              # When the last command was a username login
              # We might keep track on this one in future
            when :pass
              # Perfect we get an +OK after a PASS command this means right password given :-)
    
            private
    
          # Skip this file if the output file is the same size
      if entry.directory?
        FileUtils.mkdir_p(path) unless File.directory?(path)
      else
        entry_mode = entry.instance_eval { @mode } & 0777
        if File.exists?(path)
          stat = File.stat(path)
          # TODO(sissel): Submit a patch to archive-tar-minitar upstream to
          # expose headers in the entry.
          entry_size = entry.instance_eval { @size }
          # If file sizes are same, skip writing.
          next if stat.size == entry_size && (stat.mode & 0777) == entry_mode
        end
        puts 'Extracting #{entry.full_name} from #{tarball} #{entry_mode.to_s(8)}'
        File.open(path, 'w') do |fd|
          # eof? check lets us skip empty files. Necessary because the API provided by
          # Archive::Tar::Minitar::Reader::EntryStream only mostly acts like an
          # IO object. Something about empty files in this EntryStream causes
          # IO.copy_stream to throw 'can't convert nil into String' on JRuby
          # TODO(sissel): File a bug about this.
          while !entry.eof?
            chunk = entry.read(16384)
            fd.write(chunk)
          end
            #IO.copy_stream(entry, fd)
        end
        File.chmod(entry_mode, path)
      end
    end
    tar.close
    File.unlink(tarball) if File.file?(tarball)
  end # def untar