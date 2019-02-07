
        
            Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
          class MergeRequest < ActiveRecord::Base
        self.table_name = 'merge_requests'
    
          # Sets a cache key to the given value.
      #
      # key - The cache key to write.
      # value - The value to set.
      # timeout - The time after which the cache key should expire.
      def self.write(raw_key, value, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
    
            attr_reader :attributes
    
            attr_reader :attributes
    
      def page_params
    { page: true, max_id: params[:max_id], min_id: params[:min_id] }.compact
  end
end

    
        def new
      authorize :email_domain_block, :create?
      @email_domain_block = EmailDomainBlock.new
    end
    
      def hub_mode
    params['hub.mode']
  end
    
      private
    
      describe '#std?' do
    it 'returns true if the environment contains :std' do
      env << :std
      expect(env).to be_std
    end
    
          it 'raises ArgumentError exception when absolute and relative argument numbers are mixed' do
        -> () {
          format('%1$d %d', 1, 2)
        }.should raise_error(ArgumentError)
      end
    end
    
      it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
      platform_is :windows do
    it 'does expand shell variables when given multiples arguments' do
      # See https://bugs.ruby-lang.org/issues/12231
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('foo\n')
    end
  end
    
      platform_is_not :windows do
    it 'returns true when passed ?l if the argument is a symlink' do
      link = tmp('file_symlink.lnk')
      File.symlink(@file, link)
      begin
        Kernel.test(?l, link).should be_true
      ensure
        rm_r link
      end
    end
  end
    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
end
    
      def post_path_by_content(text)
    p = Post.find_by_text(text)
    post_path(p)
  end
    
    # Add a script to run after install (should be in the current directory):
package.scripts[:after_install] = 'my_after_install_script.sh'
    
          # Capture the output, which will be JSON metadata describing this python
      # package. See fpm/lib/fpm/package/pyfpm/get_metadata.py for more
      # details.
      logger.info('fetching package metadata', :setup_cmd => setup_cmd)
    
        cleanup_staging
    # Tell 'dir' to input '.' and chdir/prefix will help it figure out the
    # rest.
    dir.input('.')
    @staging_path = dir.staging_path
    dir.cleanup_build
  end # def input
    
      # Output a zipfile.
  def output(output_path)
    output_check(output_path)
    realpath = Pathname.new(output_path).realdirpath.to_s
    ::Dir.chdir(staging_path) do
      safesystem('zip', '-9r', realpath, '.')
    end
  end # def output
end # class FPM::Package::Tar
