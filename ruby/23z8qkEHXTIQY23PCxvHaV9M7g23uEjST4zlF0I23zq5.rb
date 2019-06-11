
        
          def self.write_cache!(date = nil)
    if date.nil?
      write_cache!(Time.now.utc)
      write_cache!(Time.now.utc.yesterday)
      return
    end
    
      describe '#<<' do
    it 'normalizes directive name' do
      builder << {
        script_src: ['symbol_underscore'],
        'script-src': ['symbol_dash'],
        'script_src' => ['string_underscore'],
        'script-src' => ['string_dash'],
      }
    
    end

    
        user_id = opts[:user].id
    offset = (opts[:offset] || 0).to_i
    limit = (opts[:limit] || 30).to_i
    
      def self.languages
    langs = Dir.glob(HIGHLIGHTJS_DIR + 'languages/*.js').map do |path|
      File.basename(path)[0..-8]
    end
    
    class ContentSecurityPolicy
  class Middleware
    def initialize(app)
      @app = app
    end
    
    # == Schema Information
#
# Table name: user_auth_tokens
#
#  id              :integer          not null, primary key
#  user_id         :integer          not null
#  auth_token      :string           not null
#  prev_auth_token :string           not null
#  user_agent      :string
#  auth_token_seen :boolean          default(FALSE), not null
#  client_ip       :inet
#  rotated_at      :datetime         not null
#  created_at      :datetime         not null
#  updated_at      :datetime         not null
#  seen_at         :datetime
#
# Indexes
#
#  index_user_auth_tokens_on_auth_token       (auth_token) UNIQUE
#  index_user_auth_tokens_on_prev_auth_token  (prev_auth_token) UNIQUE
#  index_user_auth_tokens_on_user_id          (user_id)
#

    
    module Gitlab
  module BackgroundMigration
    class PopulateMergeRequestsLatestMergeRequestDiffId
      BATCH_SIZE = 1_000
    
              lfs_objects.each do |object|
            yield object
          end
        rescue StandardError => e
          Rails.logger.error('The Lfs import process failed. #{e.message}')
        end
      end
    end
  end
end

    
            def truncated_title
          title.truncate(255)
        end
    
        def require_local_account!
      redirect_to admin_account_path(@account.id) unless @account.local? && @account.user.present?
    end
    
        def set_email_domain_block
      @email_domain_block = EmailDomainBlock.find(params[:id])
    end
    
          if @report_note.save
        if params[:create_and_resolve]
          @report.resolve!(current_account)
          log_action :resolve, @report
    
    class Api::PushController < Api::BaseController
  include SignatureVerification
    
      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
=end
    
    module Precious
  module Views
    class Layout < Mustache
      include Rack::Utils
      alias_method :h, :escape_html
    
          def sidebar_format
        has_sidebar && @sidebar.format.to_s
      end
    
    ENV['RACK_ENV'] = 'test'
require 'gollum'
require 'gollum/app'
    
      teardown do
    FileUtils.rm_r(File.join(File.dirname(__FILE__), *%w[examples test.git]))
  end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
          # File.basename is too eager to please and will return the last
      # component of the path even if it ends with a directory separator.
      ::File.basename(file_path)
    end
    
    describe Tmuxinator::Hooks::Project do
  let(:project) { FactoryBot.build(:project) }
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
          def default_project(name)
        '#{directory}/#{name}.yml'
      end