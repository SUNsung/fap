
        
          if current_adapter?(:PostgreSQLAdapter)
    def test_numeric_fields_with_nan
      m = NumericData.new(
        bank_balance: BigDecimal('NaN'),
        big_bank_balance: BigDecimal('NaN'),
        world_population: 2**62,
        my_house_population: 3
      )
      assert_predicate m.bank_balance, :nan?
      assert_predicate m.big_bank_balance, :nan?
      assert m.save
    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both threaded web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true
    
      def target_uri
    value_or_id(@json['target'])
  end
    
        it 'returns http success' do
      expect(response).to have_http_status(200)
    end
    
      spec.summary       = %q{Provides access to information typically stored in UNIX /etc directory.}
  spec.description   = spec.summary
  spec.homepage      = 'https://github.com/ruby/etc'
  spec.license       = 'BSD-2-Clause'
    
        private
    def prepare
      @encoding = @options[:encoding]
    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end
    
    class HomeController < ApplicationController
  def show
    partial_dir = Rails.root.join('app', 'views', 'home')
    if user_signed_in?
      redirect_to stream_path
    elsif request.format == :mobile
      if partial_dir.join('_show.mobile.haml').exist? ||
         partial_dir.join('_show.mobile.erb').exist? ||
         partial_dir.join('_show.haml').exist?
        render :show
      else
        redirect_to user_session_path
      end
    elsif partial_dir.join('_show.html.haml').exist? ||
          partial_dir.join('_show.html.erb').exist? ||
          partial_dir.join('_show.haml').exist?
      render :show
    elsif Role.admins.any?
      render :default
    else
      redirect_to podmin_path
    end
  end
    
      def index
    render json: like_service.find_for_post(params[:post_id])
      .includes(author: :profile)
      .as_api_response(:backbone)
  end
    
        it 'handles symbols and strings' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      assert SetWorker.set('queue' => 'bar', :retry => 11).perform_async(1)
      job = q.first
      assert_equal 'bar', job['queue']
      assert_equal 11, job['retry']
    
          a = $count
      mgr.mutex.synchronize do
        p.start
        mgr.cond.wait(mgr.mutex)
      end
      b = $count
      assert_equal a, b
    
        after do
      Sidekiq::Testing.disable!
    end
    
      class InlineWorker
    include Sidekiq::Worker
    def perform(pass)
      raise ArgumentError, 'no jid' unless jid
      raise InlineError unless pass
    end
  end