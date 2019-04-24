
        
              it 'deactivates an existing user' do
        visit admin_users_path
        expect(page).to have_no_text('inactive')
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/deactivate']').click
        expect(page).to have_text('inactive')
        users(:bob).reload
        expect(users(:bob)).not_to be_active
      end
    
          it 'returns an active nav link with menu' do
        stub(self).current_page?('/things') { true }
        stub(self).current_page?('/things/stuff') { false }
        nav = nav_link('Things', '/things') { nav_link('Stuff', '/things/stuff') }
        expect(nav).to be_html_safe
        a0 = Nokogiri(nav).at('li.dropdown.dropdown-hover.active > a[href='/things']')
        expect(a0).to be_a Nokogiri::XML::Element
        expect(a0.text.strip).to eq('Things')
        a1 = Nokogiri(nav).at('li.dropdown.dropdown-hover.active > li:not(.active) > a[href='/things/stuff']')
        expect(a1).to be_a Nokogiri::XML::Element
        expect(a1.text.strip).to eq('Stuff')
      end
    
      context '#setup_worker' do
    it 'should return an array with an instance of itself' do
      workers = HuginnScheduler.setup_worker
      expect(workers).to be_a(Array)
      expect(workers.first).to be_a(HuginnScheduler)
      expect(workers.first.id).to eq('HuginnScheduler')
    end
  end
end
    
        it 'should raise error when response says unauthorized' do
      stub(HTTParty).post { {'Response' => 'Not authorized'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Not authorized/)
    end
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
        def load_imports
      if options.show_tasks && Rake::Task.task_defined?('load:defaults')
        invoke 'load:defaults'
        set(:stage, '')
        Dir[deploy_config_path].each { |f| add_import f }
      end
    
          def primary
        self if fetch(:primary)
      end
    
          include Capistrano::ProcHelpers
    
    # and write them both.
begin
  output_packages.each do |output_package|
    output = output_package.to_s
    output_package.output(output)
    
        # Override package settings if they are not the default flag values
    # the below proc essentially does:
    #
    # if someflag != default_someflag
    #   input.someflag = someflag
    # end
    set = proc do |object, attribute|
      # if the package's attribute is currently nil *or* the flag setting for this
      # attribute is non-default, use the value.
      if object.send(attribute).nil? || send(attribute) != send('default_#{attribute}')
        logger.info('Setting from flags: #{attribute}=#{send(attribute)}')
        object.send('#{attribute}=', send(attribute))
      end
    end
    set.call(input, :architecture)
    set.call(input, :category)
    set.call(input, :description)
    set.call(input, :epoch)
    set.call(input, :iteration)
    set.call(input, :license)
    set.call(input, :maintainer)
    set.call(input, :name)
    set.call(input, :url)
    set.call(input, :vendor)
    set.call(input, :version)
    
      public(:input)
end # class FPM::Package::NPM

    
      def create_scripts
    if script?(:after_install)
      File.write(File.join(fpm_meta_path, 'after_install'), script(:after_install))
    end
  end
    
      ############################################################################
  # execmd([env,] cmd [,opts])
  #
  # Execute a command as a child process. The function allows to:
  #
  # - pass environment variables to child process,
  # - communicate with stdin, stdout and stderr of the child process via pipes,
  # - retrieve execution's status code.
  #
  # ---- EXAMPLE 1 (simple execution)
  #
  # if execmd(['which', 'python']) == 0
  #   p 'Python is installed'
  # end
  #
  # ---- EXAMPLE 2 (custom environment variables)
  #
  # execmd({:PYTHONPATH=>'/home/me/foo'}, [ 'python', '-m', 'bar'])
  #
  # ---- EXAMPLE 3 (communicating via stdin, stdout and stderr)
  #
  # script = <<PYTHON
  # import sys
  # sys.stdout.write('normal output\n')
  # sys.stdout.write('narning or error\n')
  # PYTHON
  # status = execmd('python') do |stdin,stdout,stderr|
  #   stdin.write(script)
  #   stdin.close
  #   p 'STDOUT: #{stdout.read}'
  #   p 'STDERR: #{stderr.read}'
  # end
  # p 'STATUS: #{status}'
  #
  # ---- EXAMPLE 4 (additional options)
  #
  # execmd(['which', 'python'], :process=>true, :stdin=>false, :stderr=>false) do |process,stdout|
  #  p = stdout.read.chomp
  #  process.wait
  #  if (x = process.exit_code) == 0
  #    p 'PYTHON: #{p}'
  #  else
  #    p 'ERROR:  #{x}'
  #  end
  # end
  #
  #
  # OPTIONS:
  #
  #   :process (default: false) -- pass process object as the first argument the to block,
  #   :stdin   (default: true)  -- pass stdin object of the child process to the block for writting,
  #   :stdout  (default: true)  -- pass stdout object of the child process to the block for reading,
  #   :stderr  (default: true)  -- pass stderr object of the child process to the block for reading,
  #
  def execmd(*args)
    i = 0
    if i < args.size
      if args[i].kind_of?(Hash)
        # args[0] may contain environment variables
        env = args[i]
        i += 1
      else
        env = Hash[]
      end
    end
    
    module FPM
  module Issues
    module TarWriter
      # See https://github.com/rubygems/rubygems/issues/1608
      def self.has_issue_1608?
        name, prefix = nil,nil
        io = StringIO.new
        ::Gem::Package::TarWriter.new(io) do |tw|
          name, prefix = tw.split_name('/123456789'*9 + '/1234567890') # abs name 101 chars long
        end
        return prefix.empty?
      end
    
    Given /^I add this snippet to config\/application.rb:$/ do |snippet|
  file_name = 'config/application.rb'
  cd('.') do
    content = File.read(file_name)
    File.open(file_name, 'w') {|f| f << content.sub(/class Application < Rails::Application.*$/, 'class Application < Rails::Application\n#{snippet}\n')}
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
    
      module ClassMethods
    # +has_attached_file+ gives the class it is called on an attribute that maps to a file. This
    # is typically a file stored somewhere on the filesystem and has been uploaded by a user.
    # The attribute returns a Paperclip::Attachment object which handles the management of
    # that file. The intent is to make the attachment as much like a normal attribute. The
    # thumbnails will be created when the new file is assigned, but they will *not* be saved
    # until +save+ is called on the record. Likewise, if the attribute is set to +nil+ is
    # called on it, the attachment will *not* be deleted until +save+ is called. See the
    # Paperclip::Attachment documentation for more specifics. There are a number of options
    # you can set to change the behavior of a Paperclip attachment:
    # * +url+: The full URL of where the attachment is publicly accessible. This can just
    #   as easily point to a directory served directly through Apache as it can to an action
    #   that can control permissions. You can specify the full domain and path, but usually
    #   just an absolute path is sufficient. The leading slash *must* be included manually for
    #   absolute paths. The default value is
    #   '/system/:class/:attachment/:id_partition/:style/:filename'. See
    #   Paperclip::Attachment#interpolate for more information on variable interpolaton.
    #     :url => '/:class/:attachment/:id/:style_:filename'
    #     :url => 'http://some.other.host/stuff/:class/:id_:extension'
    #   Note: When using the +s3+ storage option, the +url+ option expects
    #   particular values. See the Paperclip::Storage::S3#url documentation for
    #   specifics.
    # * +default_url+: The URL that will be returned if there is no attachment assigned.
    #   This field is interpolated just as the url is. The default value is
    #   '/:attachment/:style/missing.png'
    #     has_attached_file :avatar, :default_url => '/images/default_:style_avatar.png'
    #     User.new.avatar_url(:small) # => '/images/default_small_avatar.png'
    # * +styles+: A hash of thumbnail styles and their geometries. You can find more about
    #   geometry strings at the ImageMagick website
    #   (http://www.imagemagick.org/script/command-line-options.php#resize). Paperclip
    #   also adds the '#' option (e.g. '50x50#'), which will resize the image to fit maximally
    #   inside the dimensions and then crop the rest off (weighted at the center). The
    #   default value is to generate no thumbnails.
    # * +default_style+: The thumbnail style that will be used by default URLs.
    #   Defaults to +original+.
    #     has_attached_file :avatar, :styles => { :normal => '100x100#' },
    #                       :default_style => :normal
    #     user.avatar.url # => '/avatars/23/normal_me.png'
    # * +keep_old_files+: Keep the existing attachment files (original + resized) from
    #   being automatically deleted when an attachment is cleared or updated. Defaults to +false+.
    # * +preserve_files+: Keep the existing attachment files in all cases, even if the parent
    #   record is destroyed. Defaults to +false+.
    # * +whiny+: Will raise an error if Paperclip cannot post_process an uploaded file due
    #   to a command line error. This will override the global setting for this attachment.
    #   Defaults to true.
    # * +convert_options+: When creating thumbnails, use this free-form options
    #   array to pass in various convert command options.  Typical options are '-strip' to
    #   remove all Exif data from the image (save space for thumbnails and avatars) or
    #   '-depth 8' to specify the bit depth of the resulting conversion.  See ImageMagick
    #   convert documentation for more options: (http://www.imagemagick.org/script/convert.php)
    #   Note that this option takes a hash of options, each of which correspond to the style
    #   of thumbnail being generated. You can also specify :all as a key, which will apply
    #   to all of the thumbnails being generated. If you specify options for the :original,
    #   it would be best if you did not specify destructive options, as the intent of keeping
    #   the original around is to regenerate all the thumbnails when requirements change.
    #     has_attached_file :avatar, :styles => { :large => '300x300', :negative => '100x100' }
    #                                :convert_options => {
    #                                  :all => '-strip',
    #                                  :negative => '-negate'
    #                                }
    #   NOTE: While not deprecated yet, it is not recommended to specify options this way.
    #   It is recommended that :convert_options option be included in the hash passed to each
    #   :styles for compatibility with future versions.
    #   NOTE: Strings supplied to :convert_options are split on space in order to undergo
    #   shell quoting for safety. If your options require a space, please pre-split them
    #   and pass an array to :convert_options instead.
    # * +storage+: Chooses the storage backend where the files will be stored. The current
    #   choices are :filesystem, :fog and :s3. The default is :filesystem. Make sure you read the
    #   documentation for Paperclip::Storage::Filesystem, Paperclip::Storage::Fog and Paperclip::Storage::S3
    #   for backend-specific options.
    #
    # It's also possible for you to dynamically define your interpolation string for :url,
    # :default_url, and :path in your model by passing a method name as a symbol as a argument
    # for your has_attached_file definition:
    #
    #   class Person
    #     has_attached_file :avatar, :default_url => :default_url_by_gender
    #
    #     private
    #
    #     def default_url_by_gender
    #       '/assets/avatars/default_#{gender}.png'
    #     end
    #   end
    def has_attached_file(name, options = {})
      HasAttachedFile.define_on(self, name, options)
    end
  end
end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
        def raise_if_blank_file
      if path.blank?
        raise Errors::NotIdentifiedByImageMagickError.new('Cannot find the geometry of a file with a blank name')
      end
    end