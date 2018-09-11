
        
              GivenDailyLike.increment_for(user.id)
      expect(value_for(user.id, dt)).to eq(1)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
      UserOption.where(user_id: smoke_user.id).update_all(
    email_direct: false,
    email_digests: false,
    email_private_messages: false,
  )
    
          # Store the ID locally
      @id = value.nil? ? nil : value.to_s
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
            # Mounts a shared folder via NFS. This assumes that the exports
        # via the host are already done.
        def mount_nfs(ip, folders)
          raise BaseError, _key: :unsupported_nfs
        end
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
    desc 'Test the paperclip plugin under all supported Rails versions.'
task :all do |t|
  if ENV['BUNDLE_GEMFILE']
    exec('rake spec && cucumber')
  else
    exec('rm -f gemfiles/*.lock')
    Rake::Task['appraisal:gemfiles'].execute
    Rake::Task['appraisal:install'].execute
    exec('rake appraisal')
  end
end
    
    When /^I append gems from Appraisal Gemfile$/ do
  File.read(ENV['BUNDLE_GEMFILE']).split(/\n/).each do |line|
    if line =~ /^gem '(?!rails|appraisal)/
      append_to_gemfile line.strip
    end
  end
end
    
        # Returns the scaling and cropping geometries (in string-based ImageMagick format)
    # neccessary to transform this Geometry into the Geometry given. If crop is true,
    # then it is assumed the destination Geometry will be the exact final resolution.
    # In this case, the source Geometry is scaled so that an image containing the
    # destination Geometry would be completely filled by the source image, and any
    # overhanging image would be cropped. Useful for square thumbnail images. The cropping
    # is weighted at the center of the Geometry.
    def transformation_to dst, crop = false
      if crop
        ratio = Geometry.new( dst.width / self.width, dst.height / self.height )
        scale_geometry, scale = scaling(dst, ratio)
        crop_geometry         = cropping(dst, ratio, scale)
      else
        scale_geometry        = dst.to_s
      end
    
        private