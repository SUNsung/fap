
        
            # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
        def URIEncodeSingle(cc, result, index)
      x = (cc >> 12) & 0xF;
      y = (cc >> 6) & 63;
      z = cc & 63;
      octets = Array.new(3);
      if (cc <= 0x007F)
        octets[0] = cc;
      elsif (cc <= 0x07FF)
        octets[0] = y + 192;
        octets[1] = z + 128;
      else
        octets[0] = x + 224;
        octets[1] = y + 128;
        octets[2] = z + 128;
      end
      return URIEncodeOctets(octets, result, index);
    end
    
          def has_footer
        @footer = (@page.footer || false) if @footer.nil? && @page
        !!@footer
      end
    
          def title
        @page.title
      end
    
          def js # custom js
        @js
      end
    
          attr_reader :content, :page, :header, :footer
      DATE_FORMAT    = '%Y-%m-%d %H:%M:%S'
      DEFAULT_AUTHOR = 'you'
      @@to_xml       = { :save_with => Nokogiri::XML::Node::SaveOptions::DEFAULT_XHTML ^ 1, :indent => 0, :encoding => 'UTF-8' }
    
        assert_match /Delete this Page/, last_response.body, ''Delete this Page' link is blocked in page template'
    assert_match /New/,              last_response.body, ''New' button is blocked in page template'
    assert_match /Upload/,           last_response.body, ''Upload' link is blocked in page template'
    assert_match /Rename/,           last_response.body, ''Rename' link is blocked in page template'
    assert_match /Edit/,             last_response.body, ''Edit' link is blocked in page template'
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
        # TODO: Remove to_url once write_page changes are merged.
    @wiki.write_page('ééééé'.to_url, :markdown, '한글 text', commit_details)
    page = @wiki.page('eeeee')
    assert_equal '한글 text', utf8(page.raw_data)
  end
    
        # Extract the 'page' name from the file_path
    def extract_name(file_path)
      if file_path[-1, 1] == '/'
        return nil
      end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
              delta(first.key.loc, second.key.loc, alignment)
        end
    
    # Now we can call any method and have it execute later:
    
        @job_methods = {}
    def job_methods(job)
      @job_methods[job] ||= job.methods.collect{|m| m.to_s}
    end
    
      ##
  # SanitizedFile is a base class which provides a common API around all
  # the different quirky Ruby File libraries. It has support for Tempfile,
  # File, StringIO, Merb-style upload Hashes, as well as paths given as
  # Strings and Pathnames.
  #
  # It's probably needlessly comprehensive and complex. Help is appreciated.
  #
  class SanitizedFile