
        
                render template: 'admin/reports/show'
      end
    end
    
          def process_job(job)
        worker = new
        worker.jid = job['jid']
        worker.bid = job['bid'] if worker.respond_to?(:bid=)
        Sidekiq::Testing.server_middleware.invoke(worker, job, job['queue']) do
          execute_job(worker, job['args'])
        end
      end