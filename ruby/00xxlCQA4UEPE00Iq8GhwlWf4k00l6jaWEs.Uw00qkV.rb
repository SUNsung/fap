
        
        module Docs
  class PageDb
    attr_reader :pages
    
        def origin
      if scheme && host
        origin = '#{scheme}://#{host}'
        origin.downcase!
        origin << ':#{port}' if port
        origin
      else
        nil
      end
    end
    
          def merge(other)
        dup.merge!(other)
      end
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
              o.on('--check', 'Only checks for a capability, does not execute') do |f|
            options[:check] = f
          end
        end
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
          def to_yaml
        @pairs.to_yaml
      end
    
            expect(
          [
            :core,
            :core2,
            :penryn,
            :nehalem,
            :arrandale,
            :sandybridge,
            :ivybridge,
            :haswell,
            :broadwell,
            :skylake,
            :kabylake,
            :dunno,
          ],
        ).to include(described_class.family)
      end
    end
    
            private
    
    When /^(?:|I )fill in '([^']*)' with '([^']*)'$/ do |field, value|
  fill_in(field, :with => value)
end
    
        # Returns the pluralized form of the attachment name. e.g.
    # 'avatars' for an attachment of :avatar
    def attachment attachment, style_name
      plural_cache.pluralize_symbol(attachment.name)
    end
    
            def failure_message
          'Should have an attachment named #{@attachment_name}'
        end
    
          if defined?(ActiveRecord)
        Paperclip.options[:logger] = ActiveRecord::Base.logger
        ActiveRecord::Base.send(:include, Paperclip::Glue)
      end
    end
  end
end
