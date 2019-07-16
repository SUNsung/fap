# Searches and reads file present on GitLab installation directory
module Gitlab
  module Template
    module Finders
      class GlobalTemplateFinder < BaseTemplateFinder
        def initialize(base_dir, extension, categories = {})
          @categories = categories
          @extension  = extension
          super(base_dir)
        end
    
          expect(digest).to match %r{\A[A-Za-z0-9+/=]+\z}
      expect(digest).to eq digest.strip
    end
  end
    
            [query, filters]
      end
    
            def diffs
          @diffs ||= diffable.raw_diffs(diff_options)
        end
    
            if watch_ivar
          # wait until event is proceeded
          tries = 0
          while tries < 5 && instance_variable_get(watch_ivar) == orig_ivar
            seconds = 2 ** tries # sleep at most 31s in total
            $stderr.puts 'test_win32ole_event.rb: retrying and sleeping #{seconds}s until #{watch_ivar} is changed from #{orig_ivar.inspect}...'
            WIN32OLE_EVENT.message_loop
            sleep(seconds)
            tries += 1
          end
        end
      end
    
      def test_untainted_numeric
    bug8945 = '[ruby-core:57346] [Bug #8945] Numerics never be tainted'
    b = RbConfig::LIMITS['FIXNUM_MAX'] + 1
    tainted = [0, 1.0, 1.72723e-77, b].select do |x|
      Marshal.load(Marshal.dump(x).taint).tainted?
    end
    assert_empty(tainted.map {|x| [x, x.class]}, bug8945)
  end
    
        gz.pos.should == 0
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
          it 'decrements pos' do
        @gz.ungetc 'x'
        @gz.pos.should == 4
      end
    end
    
        Zlib::GzipWriter.wrap @io do |gzio|
      gzio.write input
    end
    @io.string.size.should == 8176
  end
end

    
      it 'properly handles excessive data, in one go' do
    # add bytes, one by one
    data = @foo_deflated * 2
    @z << data
    @z.finish.should == 'foo' + @foo_deflated
  end
end

    
        unzipped = @inflator.inflate data.pack('C*')
    @inflator.finish
    
      # ==> Configuration for :encryptable
  # Allow you to use another encryption algorithm besides bcrypt (default). You can use
  # :sha1, :sha512 or encryptors from others authentication tools as :clearance_sha1,
  # :authlogic_sha512 (then you should set stretches above to 20 for default behavior)
  # and :restful_authentication_sha1 (then you should set stretches to 10, and copy
  # REST_AUTH_SITE_KEY to pepper).
  #
  # Require the `devise-encryptable` gem when using anything other than bcrypt
  # config.encryptor = :sha512
    
              render 'admins/pods'
        end
        format.mobile { render 'admins/pods' }
        format.json { render json: pods_json }
      end
    end
    
          def fetch_public_key_from_json(string, jwt)
        json = JSON.parse(string)
        keys = json['keys']
        public_key = get_key_from_kid(keys, jwt.header['kid'])
        public_key
      end
    
      def set_up_contacts_json
    type = params[:set].presence
    if params[:a_id].present?
      type ||= 'by_aspect'
      @aspect = current_user.aspects.find(params[:a_id])
    end
    type ||= 'receiving'
    contacts_by_type(type).paginate(page: params[:page], per_page: 25)
                          .map {|c| ContactPresenter.new(c, current_user).full_hash_with_person }
  end
    
      respond_to :html, :mobile
  respond_to :json, :only => :show
    
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
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
        def raise_if_blank_file
      if path.blank?
        raise Errors::NotIdentifiedByImageMagickError.new('Cannot find the geometry of a file with a blank name')
      end
    end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end