
        
          smoke_user = User.seed do |u|
    u.id = 0
    u.name = 'smoke_user'
    u.username = 'smoke_user'
    u.username_lower = 'smoke_user'
    u.password = 'P4ssw0rd'
    u.active = true
    u.approved = true
    u.approved_at = Time.now
    u.trust_level = TrustLevel[3]
  end.first
    
        it 'returns true if the given string is a switch' do
      %w[n s i].each do |s|
        expect(subject.switch?(s)).to be true
      end
    end
    
      context 'every `.sh` file' do
    it 'has valid bash syntax' do
      Pathname.glob('#{HOMEBREW_LIBRARY_PATH}/**/*.sh').each do |path|
        relative_path = path.relative_path_from(HOMEBREW_LIBRARY_PATH)
        next if relative_path.to_s.start_with?('shims/', 'test/', 'vendor/')
    
      # insert data
  fields.each do |field, values|
    updated = '  s.#{field} = ['
    updated << values.map { |v| '\n    %p' % v }.join(',')
    updated << '\n  ]'
    content.sub!(/  s\.#{field} = \[\n(    .*\n)*  \]/, updated)
  end
    
    module Rack
  module Protection
    class Base
      DEFAULT_OPTIONS = {
        :reaction    => :default_reaction, :logging   => true,
        :message     => 'Forbidden',       :encryptor => Digest::SHA1,
        :session_key => 'rack.session',    :status    => 403,
        :allow_empty_referrer => true,
        :report_key           => 'protection.failed',
        :html_types           => %w[text/html application/xhtml text/xml application/xml]
      }
    
    When /^(?:|I )fill in '([^']*)' for '([^']*)'$/ do |value, field|
  fill_in(field, :with => value)
end
    
    require 'erb'
require 'digest'
require 'tempfile'
require 'paperclip/version'
require 'paperclip/geometry_parser_factory'
require 'paperclip/geometry_detector_factory'
require 'paperclip/geometry'
require 'paperclip/processor'
require 'paperclip/processor_helpers'
require 'paperclip/tempfile'
require 'paperclip/thumbnail'
require 'paperclip/interpolations/plural_cache'
require 'paperclip/interpolations'
require 'paperclip/tempfile_factory'
require 'paperclip/style'
require 'paperclip/attachment'
require 'paperclip/storage'
require 'paperclip/callbacks'
require 'paperclip/file_command_content_type_detector'
require 'paperclip/media_type_spoof_detector'
require 'paperclip/content_type_detector'
require 'paperclip/glue'
require 'paperclip/errors'
require 'paperclip/missing_attachment_styles'
require 'paperclip/validators'
require 'paperclip/logger'
require 'paperclip/helpers'
require 'paperclip/has_attached_file'
require 'paperclip/attachment_registry'
require 'paperclip/filename_cleaner'
require 'paperclip/rails_environment'
    
        # Returns the timestamp as defined by the <attachment>_updated_at field
    # in the server default time zone unless :use_global_time_zone is set
    # to false.  Note that a Rails.config.time_zone change will still
    # invalidate any path or URL that uses :timestamp.  For a
    # time_zone-agnostic timestamp, use #updated_at.
    def timestamp attachment, style_name
      attachment.instance_read(:updated_at).in_time_zone(attachment.time_zone).to_s
    end
    
    # Add a script to run after install (should be in the current directory):
package.scripts[:after_install] = 'my_after_install_script.sh'
    
        setscript.call(:before_install)
    setscript.call(:after_install)
    setscript.call(:before_remove)
    setscript.call(:after_remove)
    setscript.call(:before_upgrade)
    setscript.call(:after_upgrade)
    
        # Query details about our now-installed package.
    # We do this by using 'npm ls' with json + long enabled to query details
    # about the installed package.
    npm_ls_out = safesystemout(attributes[:npm_bin], 'ls', '--json', '--long', *npm_flags)
    npm_ls = JSON.parse(npm_ls_out)
    name, info = npm_ls['dependencies'].first
    
    # Use an OS X pkg built with pkgbuild.
#
# Supports input and output. Requires pkgbuild and (for input) pkgutil, part of a
# standard OS X install in 10.7 and higher.
class FPM::Package::OSXpkg < FPM::Package
    
      end
    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb
    
        process.wait if process.alive?