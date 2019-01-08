
        
                    it 'does not autocorrect the closing brace' do
              new_source = autocorrect_source(source)
              expect(new_source).to eq(source)
            end
          end
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
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
    
        # Returns a the attachment hash.  See Paperclip::Attachment#hash_key for
    # more details.
    def hash attachment=nil, style_name=nil
      if attachment && style_name
        attachment.hash_key(style_name)
      else
        super()
      end
    end