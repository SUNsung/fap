
        
        def bottle_receipt_path(bottle_file)
  Utils.popen_read('/usr/bin/tar', '-tzf', bottle_file, '*/*/INSTALL_RECEIPT.json').chomp
end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
      def internal_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'cmd'
  end
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
      def test_key
    val = 'a'
    val.succ! while ENV.has_value?(val) || ENV.has_value?(val.upcase)
    ENV['test'] = val[0...-1]
    
        obj = Object.new
    h = @cls[a => obj]
    assert_same(obj, h[[[a]]])
  end
    
      def test_delegate
    d1 = SimpleDelegator.new(t1 = Time.utc(2000))
    d2 = SimpleDelegator.new(t2 = Time.utc(2001))
    assert_equal(-1, t1 <=> t2)
    assert_equal(1, t2 <=> t1)
    assert_equal(-1, d1 <=> d2)
    assert_equal(1, d2 <=> d1)
  end
    
      Ruby = Struct.new(:version, :platform)
    
          put :update, params: {
        user: {
          notification_emails: { follow: '1' },
          interactions: { must_be_follower: '0' },
        }
      }
    
    def load_apps
  out, err, status = Open3.capture3('/usr/bin/osascript', '-e', 'tell application 'System Events' to get (name, bundle identifier, unix id) of every process')
  if status.exitstatus > 0
    puts err
    exit status.exitstatus
  end
  out = out.split(', ')
  one_third   = out.length / 3
  @app_names  = out.shift(one_third)
  @bundle_ids = out.shift(one_third)
  @unix_ids   = out.shift(one_third)
end
    
          initialize_storage
    end
    
        # Returns an extension based on the content type. e.g. 'jpeg' for
    # 'image/jpeg'. If the style has a specified format, it will override the
    # content-type detection.
    #
    # Each mime type generally has multiple extensions associated with it, so
    # if the extension from the original filename is one of these extensions,
    # that extension is used, otherwise, the first in the list is used.
    def content_type_extension attachment, style_name
      mime_type = MIME::Types[attachment.content_type]
      extensions_for_mime_type = unless mime_type.empty?
        mime_type.first.extensions
      else
        []
      end
    
            def type_allowed?(type)
          @subject.send('#{@attachment_name}_content_type=', type)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_content_type'].blank?
        end
    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
        end
    
    module Paperclip
  require 'rails'
    
        module TableDefinition
      def attachment(*attachment_names)
        options = attachment_names.extract_options!
        attachment_names.each do |attachment_name|
          COLUMNS.each_pair do |column_name, column_type|
            column_options = options.merge(options[column_name.to_sym] || {})
            column('#{attachment_name}_#{column_name}', column_type, column_options)
          end
        end
      end